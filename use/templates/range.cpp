#include <iostream>
#include <cassert>

template <typename T>
class Range {
private:
    T start;
    T end;

public:
    Range(T s, T e) : start(s), end(e) {}

    bool contains(const T& value) const {
        return value >= start && value <= end;
    }

    auto length() const {
        return end - start;
    }

    void print() const {
        std::cout << "[" << start << ", " << end << "]";
    }
};

void test_range() {
    Range<int> r_int(3, 10);
    assert(r_int.contains(5) == true);
    assert(r_int.contains(3) == true);
    assert(r_int.contains(10) == true);
    assert(r_int.contains(2) == false);
    assert(r_int.contains(11) == false);
    assert(r_int.length() == 7);

    Range<double> r_double(1.5, 5.5);
    assert(r_double.contains(3.0) == true);
    assert(r_double.contains(1.0) == false);
    assert(r_double.length() == 4.0);

    Range<char> r_char('a', 'f');
    assert(r_char.contains('c') == true);
    assert(r_char.contains('a') == true);
    assert(r_char.contains('f') == true);
    assert(r_char.contains('z') == false);
}

int main() {
    test_range();
    return 0;
}