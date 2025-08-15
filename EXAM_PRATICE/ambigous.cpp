#include <iostream>
using namespace std;


//virtual classes so that the computed dosent get mad 



class base
{
private:
    /* data */

    int a=10;
public:

void display() {
        cout << "Base class display function called with value: " << a << endl;
    }
   
};


class dir1 : public virtual base
{
private:
    /* data */
public:

};

class dir2 : public virtual base
{
private:
    /* data */
public:

};

class dir3 : public dir1, public dir2{

    public:
};

int main() {

    dir3 d;
    d.display(); // This will call the display function from the base class
     
    return 0;
}