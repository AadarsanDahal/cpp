#include <iostream>
using namespace std;

//templet for class and their use cas 

template <class T>

class number{
    T a;
    T b;
    public:
    void set_data(T x, T y) {
        a = x;
        b = y;
    }

    T add () {
        return a+b;
    }

};

int main() {

number <int>n1;
n1.set_data(10, 20);cout << "Sum of n1: " << n1.add() << endl;

     
    return 0;
}