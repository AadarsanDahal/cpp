#include <iostream>
using namespace std;

class complex
{

    public:
    /* data */
    int a,b;

    void set_data(int r,int i){
        a=r;
        b=i;

    }

    void display(){
        cout << "the object are "<< a << endl <<b <<endl;
    }


    complex add (complex r2){
                complex r5;
                r5.a= a+r2.a;
                r5.b= b+r2.b;
            return r5;
    }


  
};




int main() {
     
complex c1;
c1.set_data(3,1);
c1.display();

complex c2;
c2.set_data(4,5);
c2.display();


complex c3= c1.add(c2);
c3.display();


    return 0;
}