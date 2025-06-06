//Program to use conditional opreators 
// sybtax val = condition?:val1:val2
// conditional operator is also called as ternary operator(?)
#include <iostream>

using namespace std;

int a,b,largest,small,mod;

int main (){

cout << "Enter two numbers: \n";
cin >> a >> b;

largest = (a>b)? a:b;
cout << "big num is " << largest << endl;

small = (a<b)? a : b;
cout << "\a small num is " << small << endl;

mod = (a%b)? a:b; //the num is produced is 0 or non zero 
cout << "\n smallest num " << mod << endl;

cout << "\a" << endl;
    return 0;
}