//A program that passes the array to a function and prints the vlaue using loop

#include <iostream>
using namespace std;

int a[5];
int *p=a;

void print (int *);




int main() {

for (size_t i = 0; i < 5; i++)  // taking user data 
{

    cout<< "enter for student " << i+1 << endl;
    cin>> a[i];
    /* code */
}

    print(a);
     
    return 0;
}

void print (int *p){

    for (size_t i = 0; i < 5; i++)
    {
        /* code */

        cout<< "the marks of student "<< i+1 <<" is  "  << *(p+i)<<endl;
    }
    


}