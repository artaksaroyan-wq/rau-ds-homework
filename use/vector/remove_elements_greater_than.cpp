#include <vector>
#include <iostream>

int removeElementsGreaterThan(std::vector<int>& v, int threshold) {
    int count = 0;
    while (!v.empty() && v.back() > threshold) {
        v.pop_back();
        ++count;
    }
    return count;
}

int main() {
    std::vector<int> v = { 1, 3, 5, 7, 9 };
    int removed = removeElementsGreaterThan(v, 5);
    std::cout << removed << "\n";
    for (int val : v) {
        std::cout << val << " ";
    }
    std::cout << "\n";
    return 0;
}