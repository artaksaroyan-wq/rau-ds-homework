#include <iostream>
#include <string>

template <typename T>
T sumArray(const T* arr, size_t size) {
    T sum{};
    for (size_t i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int ints[] = { 1, 2, 3, 4, 5 };
    std::cout << sumArray(ints, 5) << "\n";

    double doubles[] = { 1.1, 2.2, 3.3 };
    std::cout << sumArray(doubles, 3) << "\n";

    std::string strings[] = { "a", "b", "c" };
    std::cout << sumArray(strings, 3) << "\n";

    return 0;
}