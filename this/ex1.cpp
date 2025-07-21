#include <iostream>
using namespace std;


class student
{
private:

int roll_no;
    string name;
public:
    /* data */
public:

void set_daya (int roll_no, string name) {

    this -> roll_no = roll_no;
    this -> name = name;

}

void display() {
    cout << "Roll No: " << roll_no << ", Name: " << name << endl;

}
    
};




int main() {

    student s1;
    s1.set_daya(101, "John Doe");
    s1.display();
     
    return 0;
}