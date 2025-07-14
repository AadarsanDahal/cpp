#include <iostream>
using namespace std;


class student
{
private:
    /* data */

    int roll;
    string name;
public:

void getdata(int r, string n) {
    roll = r;
    name = n;
}

void display() {
    cout << "Roll: " << roll << ", Name: " << name << endl;
}
   
};


class course{
    private:
    int courseID;
    string courseName;
    student s1; // Aggregation with student class

    public:

    void getcourse(int id, string name , int r, string n) {

        courseID = id;
        courseName = name;
        s1.getdata(r,n);
    }

    void showCourse() {

        cout << "course ID" << courseID << ", Course Name: " << courseName << endl;
        s1.display(); // Show student details
    };


};




int main() {

    course c1;
    c1.getcourse(201,"cpp",1,"aadarsan");
    c1.showCourse(); // Show course details and called function from student class
     
    return 0;
}