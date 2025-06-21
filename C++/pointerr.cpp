//Wap to intialize a pointer variable of "p" of yoyr chouice and assign the 
//address of some other variable 'a' print the values of &a,&p,a,p,*p


#include <iostream>
using namespace std;

int main() {
     
    int *p,a=5;
    p= &a;

    cout <<  a << endl;  //gives 5
    cout <<  &a << endl; // gives address of a
    cout <<  &p << endl; //give address of p 
    cout <<  p << endl; // gives address of a
    cout <<  *p << endl; // gives 5
    return 0;
}

