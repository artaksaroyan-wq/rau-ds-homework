#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> mergeSortedVectors(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    std::vector<int> result(vec1.size() + vec2.size());
    std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin());
    return result;
}

int main() {
    std::vector<int> vec1 = { 1, 3, 5, 7 };
    std::vector<int> vec2 = { 2, 4, 6, 8, 9 };
    std::vector<int> merged = mergeSortedVectors(vec1, vec2);
    for (int val : merged) {
        std::cout << val << " ";
    }
    std::cout << "\n";
    return 0;
}