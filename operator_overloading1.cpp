#include <iostream>
using namespace std;

class ComplexNumber {
private:
    int realPart;
    int imaginaryPart;

public:
  
    ComplexNumber(int r = 0, int i = 0) {
        realPart = r;
        imaginaryPart = i;
    }

    ComplexNumber operator+(const ComplexNumber& other) {
        ComplexNumber result;
        result.realPart = realPart + other.realPart;
        result.imaginaryPart = imaginaryPart + other.imaginaryPart;
        return result;
    }

    void display() {
        cout << realPart << " + i" << imaginaryPart << endl;
    }
};

int main() {
    ComplexNumber num1(10, 5);
    ComplexNumber num2(2, 4);

    ComplexNumber sum = num1 + num2;
    sum.display();

    return 0;
}
