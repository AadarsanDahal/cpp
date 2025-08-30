#include <iostream>
using namespace std;

class staff
{
private:
    /* data */

   
public:

int code;
string name;

void setdata(int c, string n) {
    code = c;
    name = n;
}

};


class typist : public staff
{
private:
    /* data */

   
public:

int speed;

void setspeed(int c) {

    speed = c;
}

void display() {
    cout << "Code: " << code << ", Name: " << name << ", Speed: " << speed << " words per minute" << endl;
}
};




int main() {
     

typist t1, t2;
t1.setdata(101, "Aadarshan");
t1.setspeed(75);


t1.display();
    return 0;
}