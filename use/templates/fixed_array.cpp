#include <iostream>
#include <string>
#include <cassert>

template <typename T, size_t N>
class FixedArray {
private:
    T data[N];

public:
    void set(int index, const T& value) {
        assert(index >= 0 && static_cast<size_t>(index) < N);
        data[index] = value;
    }

    T get(int index) const {
        assert(index >= 0 && static_cast<size_t>(index) < N);
        return data[index];
    }

    size_t size() const {
        return N;
    }
};

void test_fixed_array() {
    FixedArray<int, 3> arr;
    arr.set(0, 10);
    arr.set(1, 20);
    arr.set(2, 30);

    assert(arr.size() == 3);
    assert(arr.get(0) == 10);
    assert(arr.get(1) == 20);
    assert(arr.get(2) == 30);

    FixedArray<std::string, 2> str_arr;
    str_arr.set(0, "hello");
    str_arr.set(1, "world");
    assert(str_arr.size() == 2);
    assert(str_arr.get(0) == "hello");
    assert(str_arr.get(1) == "world");

    std::cout << "fixed_array passed" << std::endl;
}

int main() {
    test_fixed_array();
    return 0;
}