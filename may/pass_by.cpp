// pass by value 
// pass by refrence 
// pass by pointer 


#include <iostream>
using namespace std;

int a,b,c;

//Copies of the arguments are passed of the function not the
// variables themselves.


//swapping the value using passs by value , ref, 

int pass_by_val (int m, int n){
    
    int temp;

    temp = a;
    a=b;
    b=temp;

    return 0;
}




//Swapping by pass by refrence 

int pass_by_ref (int &v1, int &v2){

    int temp;

    temp = v1;
    v1 = v2;
    v2 = temp;

    return 0;
}

 int pass_by_pointer (int *a , int *b ){

    int temp ;
    temp = *a;
    *a=*b;
    *b=temp;

    return 0;
 }


int main() {
     
 cout << "enter 2 numbers to swap" << endl;
 cin >> a >> b;
 pass_by_val(a,b);
 cout << "the value of a is " << a << endl;
 cout << "value of b is "<< b << endl;



 pass_by_ref(a,b);
 //must be swapped again 
 cout << "the value of a by pass by ref is " << a <<endl;
 cout << "the value of b by pass by ref is " << b <<endl;


 //again should be swapped by pass by pointer 

 pass_by_pointer(&a,&b);
 cout << "the value of a by pass by pointer is " << a <<endl;
    cout << "the value of b by pass by pointer is " << b <<endl;

 
    return 0;
}


