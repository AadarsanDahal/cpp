#include <iostream>
using namespace std;



class a {
    public:
void showa() {
 
    cout << "Class a" << endl;

}

};




class b 
{
    public:
    void showb() {
     
        cout << "Class b" << endl;
    
    }
    
    };



class c : public a, public b {
public:
    void showc() {
        cout << "Class c" << endl;
    }
};

int main() {

c c1;
c1.showa();
c1.showb(); // inherited from class c
c1.showc(); // method from class c

     
    return 0;
}