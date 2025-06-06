/// Program to change Faenhite to Celsius


#include <iostream>
 using namespace std;
 float c,f;
int main () {
 
cout << "enter a num to convert into faranhite" << endl;
cin >> c;
f = (c*9/5) + 32;  
// formula for Farenhite is  F= (C*9/5) + 32
cout << "the faranhite is " << f << endl;
    return 0;

}