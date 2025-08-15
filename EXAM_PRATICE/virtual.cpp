#include <iostream>
using namespace std;

//virtual function example with base and derived classes
class base
{
private:
    /* data */
public:

   virtual void show() {
        cout << "Base class show function called" << endl;
    }
  
};

class cow : public base
{
private:
    /* data */
public:

    void show() {
        cout << "cow class show function called" << endl;
    }
  
};


class dog : public base
{
private:
    /* data */
public:

    void show() {
        cout << "dog class show function called" << endl;
    }
  
};




int main() {

    // base *p ;
   
    base *p; 
    base b;
    cow c;
    dog d;

  p = &b;
    p->show();
     // Calls base class show function

     p=&c;
    p->show();
     // Calls cow class show function

     p=&d;
    p->show();
     // Calls dog class show function



     
    return 0;
}