#include <iostream>
using namespace std;

//using friend function to add two numbers 


class num
{
private:
    /* data */

public:

int a=1;
int b=2;
   
friend int add();

};

int add() {
    num n;
    return n.a + n.b;
}




int main() {

    num n;
    cout << "Sum of a and b is: " << add() << endl; // Calls the friend function to add a and b
     
    return 0;
}