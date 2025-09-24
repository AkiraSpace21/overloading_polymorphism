#include <iostream>
using namespace std;

class ShapeVolume {
public:
  
    ShapeVolume(float length, float breadth, float height) {
        float volume = length * breadth * height;
        cout << "\nVolume of the cuboid: " << volume << endl;
    }

    ShapeVolume(float side) {
        float volume = side * side * side;
        cout << "\nVolume of the cube: " << volume << endl;
    }
};

int main() {
    ShapeVolume cuboid(2.5f, 1.5f, 5.2f);
    ShapeVolume cube(5.0f);

    return 0;
}
