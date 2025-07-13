#include <iostream>
using namespace std;

class vehicle  //base class
{
public:
    /* data */

    int make ;
    string model;   
    int seat_capacity;
    

  
void set_data (int m , string mo, int s) {

    make = m;
    model = mo;
    seat_capacity = s;
    
}

void display() {
    cout << "----------------------" << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Seat Capacity: " << seat_capacity << endl;
}


};



// class derived : access_specifier base {

//     //derived class 
// };

// Where class -> keyboard 
// Derived -> derived class name 

class public_vehicles : public vehicle  // Public _vechicles is derived from vehicle
{
    public:
 
    int route;

    void set_route (int r){

        route = r;
    }

    void display1() {
        vehicle::display(); // Call base class display method
        cout << "Route: " << route << endl;
    }

};





int main() {

    public_vehicles pv1;
    pv1.set_data(2025, "Toyota", 13);
    pv1.set_route(101);
    // pv1.display();

   
    pv1.display1();
    return 0;
}