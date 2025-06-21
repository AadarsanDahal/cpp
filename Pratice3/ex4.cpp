// 4. Create any class of your choice with your own data members.
// a. Define a parameterized constructor and a function to display the data
// members.
// b. In the main module,
        // i. Create an object using the parametrized constructor.
        // ii. Create another object using the default copy constructor.
// c. Finally, define a destructor that prints: “Destructor Executed!!”


#include <iostream>
using namespace std;

class student
{
private:
    /* data */

    int roll_no;
    string name;
public:

//parameterized constructon
student (int r, string n){
roll_no =r;
name = n;
}

void display() {
    cout << "Roll No: " << roll_no << endl;
    cout << "Name: " << name << endl;
}

~student(){

    cout << "Destructor Executed!!" << endl;
}
   
};



int main() {

    student s1(1,"Aarsan");
    s1.display(); // Display values of s1




// Default Copy Constructor
    student s2(s1);
    s2.display(); // Display values of s2 (copy of s1)
     
    return 0;
}