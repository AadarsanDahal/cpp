#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    string name;
    int age;
    string gender;
};

// Derived class
class EmployeeSalary : public Employee {
private:
    int monthly_salary;

public:
    // Get employee info + salary
    void getData(string name, int age, string gender, int monthly_salary) {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->monthly_salary = monthly_salary;
    }

    // Calculate yearly salary after 15% tax
    float calculateYearlySalary() {
        float tax = monthly_salary * 0.15;
        float yearly_salary = (monthly_salary - tax) * 12;
        return yearly_salary;
    }

    // Display info
    void display() {
        cout << "Employee name: " << name << endl;
        cout << "Employee age: " << age << endl;
        cout << "Employee gender: " << gender << endl;
        cout << "Monthly salary: " << monthly_salary << endl;
        cout << "Yearly salary after 15% tax: " << calculateYearlySalary() << endl;
    }
};

int main() {
    EmployeeSalary emp;

    string name, gender;
    int age, monthly_salary;

    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender: ";
    cin >> gender;
    cout << "Enter monthly salary: ";
    cin >> monthly_salary;

    emp.getData(name, age, gender, monthly_salary);
    emp.display();

    return 0;
}
