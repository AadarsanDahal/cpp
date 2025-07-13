#include <iostream>
using namespace std;



class a
{

public:


void showa() {
    cout << "Class a" << endl;
}

   
};


class b : public a{


    public:

    void showb() {
        cout << "Class b" << endl;
    }

};



int main() {

    b b1;
    b1.showa();
    b1.showb(); // inhereted part
     
    return 0;
}