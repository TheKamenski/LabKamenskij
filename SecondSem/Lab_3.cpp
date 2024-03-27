#include <iostream>
class Vector2D {
protected:
    double x;
    double y;
public:
    Vector2D(double x, double y) : x(x), y(y) {}
    virtual void printCoordinates() {
        std::cout << "Vector2D coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};
class Vector3D : public Vector2D {
private:
    double z;
public:
    Vector3D(double x, double y, double z) : Vector2D(x, y), z(z) {}
    void printCoordinates() override {
        Vector2D::printCoordinates();
        std::cout << "Vector3D coordinate: " << z << std::endl;
    }
};
int main() {
    Vector2D vector2D(1.0, 2.0);
    vector2D.printCoordinates();
    Vector3D vector3D(3.0, 4.0, 5.0);
    vector3D.printCoordinates();
    Vector2D* polymorphicVector = &vector3D;
    polymorphicVector->printCoordinates();
    return 0;
}
