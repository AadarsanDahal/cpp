//Static data type example 


#include <iostream>
using namespace std;

class costumer
{ 
private:
    /* data */

    string name;
    int acc_number;
    int balance;
    static int total_coustumer;

public:

costumer (string n, int a, int b) {
    name = n;
    acc_number = a;
    balance = b;
    total_coustumer++;
}

static void total_costumer(){
   cout << "Total Customers: " << total_coustumer << endl;
}

void display() {
    cout << "----------------------";
    cout << "Name: " << name << endl;
    cout << "Account Number: " << acc_number << endl;
    cout << "Balance: " << balance << endl;
    cout << "Total Customers: " << total_coustumer << endl;
}
};



 int costumer::total_coustumer = 0; // Initialize static member variable


int main() {

    string n;
    int a, b;

    costumer a1("Aarsan", 12345, 1000);
    costumer a2("Dahal", 1234, 18000);

    a1.display();
    a2.display();
        costumer a3("Bandrii", 1234, 18000);

    a3.display();

 
cout << "Total Customers from static function: ";
    costumer::total_costumer();

   
    
     
    return 0;
}