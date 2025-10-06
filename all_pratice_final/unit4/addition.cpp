#include <iostream>
using namespace std;

class addition
{
private:
    /* data */

    int a,b;
public:
   

addition(){
    a=0;
    b=0;

}

addition(int x, int y){
    a=x;
    b=y;
}


addition operator + (addition obj){
 addition temp ;
 temp.a = a + obj.a; 
 temp.b = b + obj.b; 

 return  addition (temp.a, temp.b);
}


void display(){
    cout<<"a is: "<<a<<endl;
    cout<<"b is: "<<b<<endl;

    cout<<"............."<<endl;

}

};



int main() {

    addition obj1(5,10);
    addition obj2(15,20);
    addition obj3;

        obj1.display();
        obj2.display();
    
    obj3 = obj1 + obj2;  // obj1.operator+(obj2);

    obj3.display();


    return 0;
}