#include <iostream>
using namespace std;

class Cars {
public:

    void showCarInfo(string brand, string model) {
        cout << brand << endl << model << endl;
    }


    void showPrice(int price) {
        cout << "Price: " << price << endl;
    }
};

int main() {
    Cars myCar;
    myCar.showCarInfo("VW", "Virtus");
    myCar.showPrice(1500000);

    return 0;
}
