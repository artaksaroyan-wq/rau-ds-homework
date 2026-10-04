#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

template <typename T>
int linearSearch(const std::vector<T>& vec, const T& value) {
    auto it = std::find(vec.begin(), vec.end(), value);
    if (it != vec.end()) {
        return static_cast<int>(std::distance(vec.begin(), it));
    }
    return -1;
}

int main() {
    std::vector<int> v1 = { 10, 20, 30, 40 };
    std::cout << linearSearch(v1, 30) << "\n";

    std::vector<double> v2 = { 1.1, 2.2, 3.3 };
    std::cout << linearSearch(v2, 2.2) << "\n";

    std::vector<std::string> v3 = { "apple", "banana", "cherry" };
    std::cout << linearSearch(v3, std::string("banana")) << "\n";

    return 0;
}