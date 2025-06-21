#include <iostream>
using namespace std;

int a[5]={1,2,3,4,5};
int *p=a;

void print(int *);

int main() {
     
for (size_t i = 0; i < 5; i++)
{

cout << "valur of array's third element is "<< *(p+i);
cout <<"\n";

print(a);
    /* code */
}


    return 0;
}


void print(int *p){

cout <<"Printed form function";
for (size_t i = 0; i < 5; i++)
{

    cout << "valur of array's third element is "<< *(p+i);
cout <<"\n";
    /* code */
}


}