#include <iostream>
using namespace std;

class employee
{
private:
    /* data */

    int salary;
public:


employee() {
    salary = 1000;
  
}

employee(int s) {
    salary = s;
  
}

void display() {
    cout << "Salary: " << salary << endl;

}


void operator /= (employee e6){
    salary /= e6.salary; // Divide the salary by the salary of another employee
}



};





int main() {

    employee e1(2000);
    e1.display();  // Display e1's salary
    employee e2(1000);
    e2.display();  // Display e2's salary
    e1 /= e2;  // Divide e1's salary by e2's salary
    e1.display();  // Display e1's salary
    return 0;
}