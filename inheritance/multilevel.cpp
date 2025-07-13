#include <iostream>
using namespace std;


class grandparent 
{
private:
    /* data */
public:

void showGrandparent() {
    cout << "Grandparent class" << endl;
}
  
};


class parent : public grandparent{
public:
void showParent() {
    cout << "Parent class" << endl;
}
};


class child : public parent {
public:
void showChild() {
    cout << "Child class" << endl;
}
};




int main() {

    child c1;

    c1.showGrandparent(); // inherited from grandparent
    c1.showParent();      // inherited from parent
    c1.showChild();       // method from child
     
    return 0;
}