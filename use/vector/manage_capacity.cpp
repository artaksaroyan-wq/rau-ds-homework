#include <vector>
#include <iostream>

void manageCapacity(std::vector<int>& v) {
    std::cout << v.size() << " " << v.capacity() << "\n";
    v.reserve(v.size() + 500);
    for (int i = 1; i <= 500; ++i) {
        v.push_back(i);
    }
    std::cout << v.size() << " " << v.capacity() << "\n";
}

int main() {
    std::vector<int> v;
    manageCapacity(v);
    return 0;
}