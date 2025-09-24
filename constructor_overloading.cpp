#include <iostream>
using namespace std;

class MultiConstruct {
public:
   
    MultiConstruct(int a, int b) {
        cout << "\nInteger values: " << a << " and " << b << endl;
    }

 
    MultiConstruct(string str1, string str2) {
        cout << "\nString values: " << str1 << " and " << str2 << endl;
    }

    MultiConstruct(float x, float y) {
        cout << "\nFloat values: " << x << " and " << y << endl;
    }
};

int main() {
    MultiConstruct obj1(2, 4);
    MultiConstruct obj2("Tripatjot", "Singh");
    MultiConstruct obj3(2.5f, 5.5f);

    return 0;
}
