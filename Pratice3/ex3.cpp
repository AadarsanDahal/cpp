// . Create a class employee having private attributes: emp_id, name, and post.
// a. Define a default constructor and parameterized constructor.
// b. Create a public function showdata() to display attributes of an object.
// c. In the main module,
            // i. Create an object e1 using default constructor and print the values.
            // ii. Ask for the inputs of attributes from user and store in variables.
            // iii. Create another object e2 using parameterized constructor (use the
            // data given by the user) and print the values.


            // iv. Also create another object e3 using default copy constructor such
            // // that e3 = e2 and display the details

#include <iostream>
using namespace std;

class employee
{
private:
    /* data */
    int emp_id;
    string name;
    string post;

public:

//default construction
    employee(){

        emp_id = 1;
        name = "Jon Doe";
        post = "Software Engineer";
    }

    employee(int id, string n , string p){
        emp_id = id;
        name = n;
        post = p;

    }

    void showdata(){
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Post: " << post << endl;
        cout << "------------------------" << endl;
    }
};



int main() {

    int id;
    string name, post;

    //creating using Default constructors
    employee e1; // Default constructor
    e1.showdata(); // Display default values


    cout << "Enter Employee ID, Name and Post: " << endl;
    cin >> id >> name >> post;
    //creating obj with parameters 
employee e2 (id, name, post);
e2.showdata(); // Display values of e2

     
employee e3(e2);

e3.showdata();


    return 0;
}