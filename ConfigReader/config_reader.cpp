//
// Created by Meow on 18.12.2021.
//

#include "config_reader.h"
#include <iostream>

std::map<int, std::pair<std::string, std::string>> ConfigReader::getConfig() const {
    return config;
}

void ConfigReader::parseConfig() {
    std::string line;
    bool order_flag = false;

    while (!config_file.eof()) {
        std::getline(config_file, line);
        if (line == "desc")
            continue;

        if (line == "csed") {
            order_flag = true;
            continue;;
        }
        if (!order_flag)
            parseTask(line);
        else {
            parseOrder(line);
            break;
        }
    }
}

ConfigReader::ConfigReader(const std::string &filename) {
    config_file.open(filename);
}

ConfigReader::~ConfigReader() {
    config_file.close();
}

void ConfigReader::parseTask(std::string &line) {
    std::regex task_regexp(R"(([\d]+)[ ]*=[ ]*([\w]+)[ ]*([\w ]*))");
    std::string task_number, type, args;

    auto task_begin = std::sregex_iterator(line.begin(), line.end(), task_regexp);
    std::smatch match = *task_begin;
    if (match.begin() + 1 < match.end())
        task_number = (match.begin() + 1)->str();
    if (match.begin() + 2 < match.end())
        type = (match.begin() + 2)->str();
    if (match.begin() + 3 < match.end())
        args = (match.begin() + 3)->str();
    config[std::stoi(task_number)] = {type, args};
}

void ConfigReader::parseOrder(std::string &line) {
    std::string delimiter = " -> ";
    size_t start = 0, end = line.find(delimiter);
    int task_number;
    while (end != std::string::npos){
        task_number = std::stoi(line.substr(start, end - start));
        order.insert(order.end(), task_number);
        start = end + delimiter.length();
        end = line.find(delimiter, start);
    }

    task_number = std::stoi(line.substr(start, end - start));
    order.insert(order.end(), task_number);
}

