#include <cstring>
#include <cassert>

template <typename T>
bool isEqual(const T& a, const T& b) {
    return a == b;
}

template <>
bool isEqual<const char*>(const char* const& a, const char* const& b) {
    if (a == nullptr && b == nullptr) return true;
    if (a == nullptr || b == nullptr) return false;
    return std::strcmp(a, b) == 0;
}

void test_is_equal() {
    assert(isEqual(5, 5) == true);
    assert(isEqual(5, 3) == false);
    assert(isEqual(3.14, 3.14) == true);

    const char* s1 = "hello";
    const char* s2 = "hello";
    const char* s3 = "world";

    assert(isEqual(s1, s2) == true);
    assert(isEqual(s1, s3) == false);
    assert(isEqual("abc", "abc") == true);
    assert(isEqual("abc", "def") == false);
}

int main() {
    test_is_equal();
    return 0;
}