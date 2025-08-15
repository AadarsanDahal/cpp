#include <iostream>
using namespace std;

//using type function to determine the type of a variable
class type
{
private:
    /* data */
    int a;


public:

void set_data(int a) {
    this -> a = a;
}

void display() {
    cout << "Type of a is: " << a<< endl;}
   
};




int main() {

    type t;
    t.set_data(10);
    t.display(); // Calls the display function to show the type of a

     
    return 0;
}