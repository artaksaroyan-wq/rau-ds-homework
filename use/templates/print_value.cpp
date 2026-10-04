#include <iostream>
#include <string>
#include <sstream>
#include <cassert>

template <typename T>
void printValue(const T& value, std::ostream& out = std::cout) {
    out << value;
}

template <>
void printValue<bool>(const bool& value, std::ostream& out) {
    out << (value ? "true" : "false");
}

template <>
void printValue<const char*>(const char* const& value, std::ostream& out) {
    out << "\"" << (value ? value : "") << "\"";
}

template <>
void printValue<char*>(char* const& value, std::ostream& out) {
    out << "\"" << (value ? value : "") << "\"";
}

void test_print_value() {
    {
        std::stringstream ss;
        printValue(42, ss);
        assert(ss.str() == "42");
    }
    {
        std::stringstream ss;
        printValue(3.14, ss);
        assert(ss.str() == "3.14");
    }
    {
        std::stringstream ss;
        printValue(true, ss);
        assert(ss.str() == "true");
    }
    {
        std::stringstream ss;
        printValue(false, ss);
        assert(ss.str() == "false");
    }
    {
        std::stringstream ss;
        printValue("test", ss);
        assert(ss.str() == "\"test\"");
    }

    std::cout << "print_value passed" << std::endl;
}

int main() {
    test_print_value();
    return 0;
}