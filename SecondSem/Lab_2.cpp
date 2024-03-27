#include <iostream>
class Vector {
private:
    int* arr;
    int size;
public:
    Vector() : arr(nullptr), size(0) {}
    Vector(int n) : size(n) {
        arr = new int[size];
    }
    Vector(const int* arr, int n) : size(n) {
        this->arr = new int[size];
        for (int i = 0; i < size; i++) {
            this->arr[i] = arr[i];
        }
    }
    Vector(const Vector& other) : size(other.size) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }
    Vector(Vector&& other) noexcept : arr(other.arr), size(other.size) {
        other.arr = nullptr;
        other.size = 0;
    }
    ~Vector() {
        delete[] arr;
    }
    Vector& operator=(const Vector& other) {
        if (this == &other) {
            return *this;
        }
        delete[] arr;
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
        return *this;
    }
    Vector& operator=(Vector&& other) noexcept {
        if (this == &other) {
            return *this;
        }
        delete[] arr;
        arr = other.arr;
        size = other.size;
        other.arr = nullptr;
        other.size = 0;
        return *this;
    }
    Vector operator*(int scalar) const {
        Vector result(size);
        for (int i = 0; i < size; i++) {
            result.arr[i] = arr[i] * scalar;
        }
        return result;
    }
    int& operator[](int index) {
        return arr[index];
    }
    const int& operator[](int index) const {
        return arr[index];
    }
    int getSize() const {
        return size;
    }
};
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    Vector vec1(arr, sizeof(arr) / sizeof(arr[0]));
    Vector vec2 = vec1 * 2;
    std::cout << "Original vector: ";
    for (int i = 0; i < vec1.getSize(); i++) {
        std::cout << vec1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Multiplied vector: ";
    for (int i = 0; i < vec2.getSize(); i++) {
        std::cout << vec2[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

