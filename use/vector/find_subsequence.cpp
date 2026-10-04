#include <vector>
#include <iostream>
#include <algorithm>

int findSubsequence(const std::vector<int>& main_vec, const std::vector<int>& sub_vec) {
    if (sub_vec.empty() || main_vec.size() < sub_vec.size()) {
        return -1;
    }
    auto it = std::search(main_vec.begin(), main_vec.end(), sub_vec.begin(), sub_vec.end());
    if (it != main_vec.end()) {
        return std::distance(main_vec.begin(), it);
    }
    return -1;
}

int main() {
    std::vector<int> main_vec = { 1, 2, 3, 4, 5, 6 };
    std::vector<int> sub_vec = { 3, 4, 5 };
    int index = findSubsequence(main_vec, sub_vec);
    std::cout << index << "\n";
    return 0;
}