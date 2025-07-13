#include <iostream>
using namespace std;

class person
{

    /* data */
public:

int age =21, sn=2;
string name = "Dr.Amitab Bachan";
   
};

class doctor
{

    /* data */
public:

string skill ="Bone";
   
};


class professor : public person , public doctor
{

    /* data */
public:
string institute ="Nepal_medical_college";
void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Skill: " << skill << endl;
        cout << "SN: " << sn << endl;
        cout << "Institute: " << institute << endl;
    }


  
};


int main() {
     

    professor p1;
    p1.display();
    return 0;
}