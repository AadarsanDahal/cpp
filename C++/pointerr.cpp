//Wap to intialize a pointer variable of "p" of yoyr chouice and assign the 
//address of some other variable 'a' print the values of &a,&p,a,p,*p


#include <iostream>
using namespace std;

int main() {
     
    int *p,a=5;
    p= &a;

    cout <<  a << endl;
    cout <<  &a << endl;
    cout <<  &p << endl;
    cout <<  p << endl;
    cout <<  *p << endl;
    return 0;
}

