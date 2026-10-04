#include <vector>
#include <iostream>

void createAndFillVector(int n) {
    std::vector<int> vec(n);

    for (int i = 0; i < n; ++i) {
        vec[i] = i + 1;
    }

    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    std::cout << vec.size() << " " << vec.capacity() << "\n";
}

int main() {
    createAndFillVector(5);
    return 0;
}