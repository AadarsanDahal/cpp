
#include <iostream>
using namespace std;

class length
{
private:
    /* data */
    float feet;
public:

length (float f){

    feet =f;
}

void operator ++ (){
    ++feet; // Increment feet by 1
}


// /*SUNTAX


// void operator ++ (/*argunments*/){
//     /*Logic*/
// }




void display(){
    cout << "the value of float is " << feet <<endl;
}

// Overloading Function for Unary Operator




   
};



int main() {

    length l1 (3.14);
    l1.display();

    ++l1;
    l1.display();
    
     
    return 0;
}