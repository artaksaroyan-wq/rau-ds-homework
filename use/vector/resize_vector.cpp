#include <vector>
#include <iostream>

template <typename T>
void resizeVector(std::vector<T>& v, size_t newSize, T defaultValue) {
    for (const auto& val : v) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    v.resize(newSize, defaultValue);

    for (const auto& val : v) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> v = { 1, 2, 3 };
    resizeVector(v, 5, 42);
    return 0;
}