#include <iostream>
using namespace std;


class ex1
{
private:
    /* data */

public:


   
    friend void display(ex1 obj1);
};

 void display(ex1 obj1){

    cout<<"value out"<< endl;

 }

int main() {

    ex1 obj;
    display(obj);
     
    return 0;
}