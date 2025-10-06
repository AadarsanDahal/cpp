#include <iostream>
using namespace std;

class increment
{
private:
    /* data */

    int value;
public:

increment(){
    value = 0;
}

increment(int v){
    value = v;
}

increment operator ++ (){  // Prefix
value++;
return increment(value);
}

increment operator ++ (int){  // Postfix
 value++;
 return increment(value);  // return previous value    
}



void display(){
    cout<<"Value is: "<<value<<endl;

}
};




int main() {


    increment obj1(5);
    increment obj2;

    obj1.display();


    obj2 = ++obj1;  // Prefix
 
    obj2.display();


    increment obj3;

    obj3 = obj2++;  // Postfix
    obj3.display();




     
    return 0;
}