#include <vector>
#include <iostream>

std::vector<int> createVectorFromInput() {
    std::vector<int> vec;
    int value;
    while (std::cin >> value && value != 0) {
        vec.push_back(value);
    }
    return vec;
}

int main() {
    std::vector<int> inputVec = createVectorFromInput();
    std::cout << inputVec.size() << "\n";
    for (int val : inputVec) {
        std::cout << val << " ";
    }
    std::cout << "\n";
    return 0;
}