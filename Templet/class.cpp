#include <iostream>
using namespace std;

//Defining class shape

template <class T>

class shape
{
private:
    /* data */

    T length;
    T breadth;
public:
    
    void set(T l , T b){
        length = l;
       breadth = b;
    }

    T calc(){
        return length * breadth;
    }
};


class base : public shape<int>
{
private:
    /* data */
public:

};


int main() {

   base b;
   b.set(10.56,20.54);
   cout << b.calc() <<endl;
     
    return 0;
}