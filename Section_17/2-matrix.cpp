#include <iostream>
#include <vector>

template<typename T>
class Matrix {
private:
    std::vector<std::vector<T>> data;
public:
    Matrix(int rows, int cols) : data(rows, std::vector<T>(cols)) {}
    Matrix operator+(const Matrix& other) {
        Matrix result(data.size(), data[0].size());
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[i].size(); ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
    Matrix operator*(const Matrix& other) {
        Matrix result(data.size(), data.size());
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data.size(); ++j) {
                for (size_t k = 0; k < data.size(); ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    Matrix<int> m1(2, 2);
    m1.data[0][0] = 1;
    return 0;
}