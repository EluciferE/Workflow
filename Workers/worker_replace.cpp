//
// Created by Meow on 18.12.2021.
//

#include "worker_replace.h"

void WorkerReplace::process(WorkData &in, std::string &args) {
    std::vector<std::string> new_data = in.getData();

    if (!in.getFilled())
        throw WorkerException("Bad order for 'replace' (got empty data)");

    std::pair<std::string, std::string> parsed = parseArgs(args);
    std::string word1 = parsed.first, word2 = parsed.second;

    size_t pos = 0;

    for (auto& line: new_data){
        while (line.find(word1, pos) != std::string::npos){
            line.replace(line.find(word1, pos), word1.size(), word2);
            pos += word2.size();
        }
    }

    in.setData(new_data);
}

std::pair<std::string, std::string> WorkerReplace::parseArgs(std::string args) {
    std::regex regex_task("(.*) (.*)");
    std::string word1, word2;

    auto task_begin = std::sregex_iterator(args.begin(), args.end(), regex_task);
    std::smatch match = *task_begin;

    if (match.begin() + 1 < match.end())
        word1 = (match.begin() + 1)->str();
    if (match.begin() + 2 < match.end())
        word2 = (match.begin() + 2)->str();

    if (word1.empty() || word2.empty())
        throw WorkerException("Bad args for 'replace' (got '" + word1 +"' '" + word2 + "')");

    return {word1, word2};
}
