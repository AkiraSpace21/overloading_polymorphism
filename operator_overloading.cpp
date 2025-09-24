#include <iostream>
using namespace std;

class Cuboid {
private:
    double length;
    double width;
    double height;

public:
    // Constructor with default values
    Cuboid(double l = 0, double w = 0, double h = 0) {
        length = l;
        width = w;
        height = h;
    }

    Cuboid operator+(const Cuboid& other) {
        return Cuboid(length + other.length,
                      width + other.width,
                      height + other.height);
    }

    Cuboid operator-(const Cuboid& other) {
        return Cuboid(length - other.length,
                      width - other.width,
                      height - other.height);
    }

    void showDimensions() {
        cout << "Length: " << length
             << ", Width: " << width
             << ", Height: " << height << endl;
    }
};

int main() {
    Cuboid c1(5, 5, 2);
    Cuboid c2(2, 4, 1);

    cout << "Cuboid 1: ";
    c1.showDimensions();

    cout << "Cuboid 2: ";
    c2.showDimensions();

    Cuboid sumCuboid = c1 + c2;
    Cuboid diffCuboid = c1 - c2;

    cout << "Sum of Cuboids: ";
    sumCuboid.showDimensions();

    cout << "Difference of Cuboids: ";
    diffCuboid.showDimensions();

    return 0;
}
