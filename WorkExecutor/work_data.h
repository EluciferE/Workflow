#ifndef WORKFLOW_WORK_DATA_H
#define WORKFLOW_WORK_DATA_H
#include <vector>
#include <string>


class WorkData{
private:
    bool filled = false;
    std::vector<std::string> data;
public:
    void setData(std::vector<std::string> new_data);
    std::vector<std::string>& getData();
    void setFilled(bool is_filled);
    bool getFilled() const;
};

#endif //WORKFLOW_WORK_DATA_H
