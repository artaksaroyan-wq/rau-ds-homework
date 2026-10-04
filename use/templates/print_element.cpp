#include <iostream>
#include <string>

template <typename T>
void printElement(const T& val) {
    std::cout << val << "\n";
}

int main() {
    printElement(42);
    printElement(3.14);
    printElement(std::string("hello"));
    return 0;
}