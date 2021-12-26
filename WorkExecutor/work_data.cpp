#include "work_data.h"

void WorkData::setData(std::vector<std::string> new_data) {
    data = std::move(new_data);
}

std::vector<std::string> &WorkData::getData() {
    return data;
}

void WorkData::setFilled(bool is_filled) {
    filled = is_filled;
}

bool WorkData::getFilled() const {
    return filled;
}
