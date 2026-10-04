#include <vector>
#include <iostream>

std::vector<std::vector<int>> groupAdjacent(const std::vector<int>& vec) {
    std::vector<std::vector<int>> result;
    if (vec.empty()) {
        return result;
    }

    std::vector<int> current_group = { vec[0] };
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] == vec[i - 1]) {
            current_group.push_back(vec[i]);
        }
        else {
            result.push_back(current_group);
            current_group = { vec[i] };
        }
    }
    result.push_back(current_group);
    return result;
}

int main() {
    std::vector<int> vec = { 1, 1, 2, 2, 2, 3, 1, 1 };
    std::vector<std::vector<int>> groups = groupAdjacent(vec);
    for (const auto& group : groups) {
        for (int val : group) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
    return 0;
}