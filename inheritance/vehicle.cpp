#include <iostream>
using namespace std;

class vehicle
{
private:
    /* data */

    int make ;
    string model;   
    int seat_capacity;

public:
  
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


class public_vehicles 
{
private:
    /* data */
    int make ;
    string model;   
    int seat_capacity;
    int route;
    
    
public:

void set_data (int m , string mo, int s, int r) {
    
    make = m;
    model = mo;
    seat_capacity = s;
    route = r;

}

void display() {

    cout << "----------------------" << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Seat Capacity: " << seat_capacity << endl;
    cout << "Route: " << route << endl;
}
   
};





int main() {
     
    return 0;
}