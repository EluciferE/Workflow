#ifndef WORKFLOW_CONFIG_READER_H
#define WORKFLOW_CONFIG_READER_H

#include <vector>
#include <string>
#include <map>
#include <fstream>

#include <regex>

class ConfigReader{

private:
    // Config: {int: [type, args], ...}
    std::map<int, std::pair<std::string, std::string>> config;
    std::vector<int> order;

    std::fstream config_file;

    void parseTask(std::string& line);
    void parseOrder(std::string& line);

public:
    explicit ConfigReader(const std::string& filename);
    ~ConfigReader();

    std::map<int, std::pair<std::string, std::string>> getConfig() const;
    void parseConfig();
};

#endif //WORKFLOW_CONFIG_READER_H
