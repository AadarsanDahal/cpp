#include <iostream>
using namespace std;

float div (float,float b=3) ;

float a,b;


int main() {
     
    cout << "enter 2 numbers to divide" << endl;
    cin  >> a >> b;

    cout << " the result while 2 argunments is " << div(a,b) << endl;
    cout << " the result while a argunments is " << div(a) << endl;
    
    return 0;
}

float div (float a,float b){
    return a/b;
}