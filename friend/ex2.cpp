#include <iostream>
using namespace std;

class rect
{
private:
    /* data */

    int l; //this is length
    int b; // this is breathc
public:

void set_data(int l , int b){
 this->l = l;
 this -> b = b;
}


friend void calc (rect); 
  
};

void calc(rect s){
cout << "the value of area of rectangle  is " << s.l*s.b <<endl;
}




int main() {

    rect r1;
    r1.set_data(3,4);
    calc(r1);
     
    return 0;
}