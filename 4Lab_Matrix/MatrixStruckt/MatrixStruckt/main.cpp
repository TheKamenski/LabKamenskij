//
//  main.cpp
//  MatrixStruckt
//
//  Created by Констатин  on 10.11.2023.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

struct Matrix {
    int** mat = nullptr;
    size_t n_ = 0u;
    size_t m_ = 0u;
};

void Construct(Matrix& out, size_t n, size_t m) {
    out.n_ = n;
    out.m_ = m;
    out.mat = new int*[n];
    for (size_t i = 0; i < n; ++i) {
        out.mat[i] = new int[m]();
    }
}

void Destruct(Matrix& in) {
    for (size_t i = 0; i < in.n_; ++i) {
        delete[] in.mat[i];
    }
    delete[] in.mat;
    in.mat = nullptr;
    in.n_ = 0;
    in.m_ = 0;
}

Matrix Copy(const Matrix& matrix) {
    Matrix copy;
    Construct(copy, matrix.n_, matrix.m_);
    for (size_t i = 0; i < matrix.n_; ++i) {
        for (size_t j = 0; j < matrix.m_; ++j) {
            copy.mat[i][j] = matrix.mat[i][j];
        }
    }
    return copy;
}

Matrix Add(const Matrix& a, const Matrix& b) {
    if (a.n_ != b.n_ || a.m_ != b.m_) {
        Matrix empty;
        return empty;
    }
    Matrix result;
    Construct(result, a.n_, a.m_);
    for (size_t i = 0; i < a.n_; ++i) {
        for (size_t j = 0; j < a.m_; ++j) {
            result.mat[i][j] = a.mat[i][j] + b.mat[i][j];
        }
    }
    return result;
}

Matrix Sub(const Matrix& a, const Matrix& b) {
    if (a.n_ != b.n_ || a.m_ != b.m_) {
        Matrix empty;
        return empty;
    }
    
    
    
    Matrix result;
    Construct(result, a.n_, a.m_);
    for (size_t i = 0; i < a.n_; ++i) {
        for (size_t j = 0; j < a.m_; ++j) {
            result.mat[i][j] = a.mat[i][j] - b.mat[i][j];
        }
    }
    return result;
}

Matrix Mult(const Matrix& a, const Matrix& b) {
    if (a.m_ != b.n_) {
        Matrix empty;
        return empty;
    }
    Matrix result;
    Construct(result, a.n_, b.m_);
    for (size_t i = 0; i < a.n_; ++i) {
        for (size_t j = 0; j < b.m_; ++j) {
            result.mat[i][j] = 0;
            for (size_t k = 0; k < a.m_; ++k) {
                result.mat[i][j] += a.mat[i][k] * b.mat[k][j];
            }
        }
    }
    return result;
}


bool operator==(const Matrix& a, const Matrix& b) {
    if (a.n_ != b.n_ || a.m_ != b.m_) {
        return false;
    }
    for (size_t i = 0; i < a.n_; ++i) {
        for (size_t j = 0; j < a.m_; ++j) {
            if (a.mat[i][j] != b.mat[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void Filling(Matrix& matrix) {
    for (size_t i = 0; i < matrix.n_; ++i) {
        for (size_t j = 0; j < matrix.m_; ++j) {
            matrix.mat[i][j] = rand() % 10;
        }
    }
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    size_t n, m;
    std::cout << "rows: ";
    std::cin >> n;
    std::cout << "columns: ";
    std::cin >> m;

    Matrix mat1;
    Construct(mat1, n, m);
    Filling(mat1);

    Matrix mat2;
    Construct(mat2, n, m);
    Filling(mat2);

    Matrix sum = Add(mat1, mat2);
    Matrix difference = Sub(mat1, mat2);
    Matrix product = Mult(mat1, mat2);

    // Output
    std::cout << "Matrix1:\n";
    for (size_t i = 0; i < mat1.n_; ++i) {
        for (size_t j = 0; j < mat1.m_; ++j) {
            std::cout << mat1.mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matrix2:\n";
    for (size_t i = 0; i < mat2.n_; ++i) {
        for (size_t j = 0; j < mat2.m_; ++j) {
            std::cout << mat2.mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Sum:\n";
    for (size_t i = 0; i < sum.n_; ++i) {
        for (size_t j = 0; j < sum.m_; ++j) {
            std::cout << sum.mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Subtration:\n";
    for (size_t i = 0; i < difference.n_; ++i) {
        for (size_t j = 0; j < difference.m_; ++j) {
            std::cout << difference.mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Product:\n";
    for (size_t i = 0; i < product.n_; ++i) {
        for (size_t j = 0; j < product.m_; ++j) {
            std::cout << product.mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    

    Destruct(mat1);
    Destruct(mat2);
    Destruct(sum);
    Destruct(difference);
    Destruct(product);

    return 0;
}

