#include <iostream>
#include <string>
#include <cassert>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(const T1& f, const T2& s) : first(f), second(s) {}

    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }

    void print() const {
        std::cout << first << " " << second << "\n";
    }
};

void test_pair() {
    Pair<int, std::string> p(42, "hello");
    assert(p.getFirst() == 42);
    assert(p.getSecond() == "hello");

    Pair<double, char> p2(3.14, 'a');
    assert(p2.getFirst() == 3.14);
    assert(p2.getSecond() == 'a');

    std::cout << "pair passed" << std::endl;
}

int main() {
    test_pair();
    return 0;
}