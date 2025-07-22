//finding max with templet function

#include <iostream>
using namespace std;

template <typename T>  //declaringg

T find_max (T a , T b)     //defining
{
    if (a>b)
    {
        /* code */
        return a;
    }
    else{
        return b;
    }
    
}

int main() {

    cout << "the greater value is " <<find_max(12,45) <<endl; 
    cout << "the greater value is " <<find_max(2.456,0.543) <<endl;  //2.45..
    cout << "the greater value is " <<find_max("A","B") <<endl;   // A 
    
    double d1 = 12.45 ,d2 = 98.78;

    cout << "the greater value is " <<find_max(d1,d2) <<endl;   //d2 , 98.78
     
    return 0;
}