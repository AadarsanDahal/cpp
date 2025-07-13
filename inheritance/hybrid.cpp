#include <iostream>
using namespace std;


class machine {

    public:

    void showMachine() {
        cout << "Machine class" << endl;
    }
};



class vehicle : public machine {

    public:
    void showVehicle() {
        cout << "Vehicle class" << endl;
    }
};


class calculator : public machine {

    public:
    void showCalculator() {
        cout << "Calculator class" << endl;
    }
};


class hybrid : public vehicle, public calculator {

    public:
    void showHybrid() {
        cout << "Hybrid class" << endl;
    }
};
int main() {



    hybrid h1;

    h1.showHybrid(); // method from hybrid
    h1.showCalculator(); // inherited from calculator
    h1.showVehicle();
    h1.vehicle::showMachine(); // inherited from machine
     
    return 0;
}