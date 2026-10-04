#include <iostream>
#include <string>

template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 1, b = 2;
    mySwap(a, b);
    std::cout << a << " " << b << "\n";

    double x = 1.1, y = 2.2;
    mySwap(x, y);
    std::cout << x << " " << y << "\n";

    std::string s1 = "hello", s2 = "world";
    mySwap(s1, s2);
    std::cout << s1 << " " << s2 << "\n";

    return 0;
}