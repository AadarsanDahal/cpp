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
    
    shape(T l , T b){
        length = l;
       breadth = b;
    }

    void calc(){
        cout << "Area of shape is " << length * breadth << endl;
    }


};



template <class B>

class direved : public shape<B>
{
private:

    B length;
    B breadth;
    /* data */
public:
    direved(B a, B b){
        length =a;
        breadth=b;
    }

};


int main() {
\
     
    return 0;
}