#include <iostream>
#include <string>
#include <cassert>

template <typename T, size_t N, size_t M>
class Matrix {
private:
    T data[N][M];

public:
    Matrix() {
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < M; ++j) {
                data[i][j] = T{};
            }
        }
    }

    void set(int row, int col, const T& value) {
        assert(row >= 0 && static_cast<size_t>(row) < N);
        assert(col >= 0 && static_cast<size_t>(col) < M);
        data[row][col] = value;
    }

    T get(int row, int col) const {
        assert(row >= 0 && static_cast<size_t>(row) < N);
        assert(col >= 0 && static_cast<size_t>(col) < M);
        return data[row][col];
    }

    void print() const {
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < M; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << "\n";
        }
    }

    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other) const {
        Matrix<T, N, M> result;
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < M; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
};

void test_matrix() {
    Matrix<int, 2, 2> m1;
    m1.set(0, 0, 1);
    m1.set(0, 1, 2);
    m1.set(1, 0, 3);
    m1.set(1, 1, 4);

    assert(m1.get(0, 0) == 1);
    assert(m1.get(0, 1) == 2);
    assert(m1.get(1, 0) == 3);
    assert(m1.get(1, 1) == 4);

    Matrix<int, 2, 2> m2;
    m2.set(0, 0, 5);
    m2.set(0, 1, 6);
    m2.set(1, 0, 7);
    m2.set(1, 1, 8);

    Matrix<int, 2, 2> m3 = m1 + m2;
    assert(m3.get(0, 0) == 6);
    assert(m3.get(0, 1) == 8);
    assert(m3.get(1, 0) == 10);
    assert(m3.get(1, 1) == 12);

    std::cout << "matrix passed" << std::endl;
}

int main() {
    test_matrix();
    return 0;
}