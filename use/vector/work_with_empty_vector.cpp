#include <vector>
#include <iostream>

void workWithEmptyVector() {
    std::vector<int> vec;
    for (int i = 1; i <= 10; ++i) {
        vec.push_back(i);
        std::cout << vec.size() << " " << vec.capacity() << "\n";
    }
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}

int main() {
    workWithEmptyVector();
    return 0;
}