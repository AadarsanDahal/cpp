#include <iostream>
using namespace std;

class student
{
private:
    /* data */
    string name;
    int roll;
public:

student(string n, int r){
    name = n;
    roll = r;
}

void display() {
    cout << "Name: " << name << ", Roll: " << roll << endl;
}

    student operator ++ (int){
        roll++; // Increment roll by 1
        return student(name, roll); // Return a new student object with the incremented roll
    }
    
};



int main() {

    student s1("John Doe", 101);
    s1.display();
    student s2 = s1++;
    s2.display();
     
    return 0;
}