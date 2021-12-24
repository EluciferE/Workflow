//
// Created by Meow on 18.12.2021.
//

#include "worker_replace.h"

std::vector<std::string> WorkerReplace::process(std::vector<std::string> &in, std::string &args) {

    if ((in.size() == 1) && (in[0].empty()))
        throw WorkerException("Bad order for 'replace' (got empty data'");

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

    size_t pos = 0;

    for (auto& line: in){
        while (line.find(word1, pos) != std::string::npos){
            line.replace(line.find(word1, pos), word1.size(), word2);
            pos += word2.size();
        }
    }

    return in;
}
