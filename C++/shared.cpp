#include <iostream>
using namespace std;

int a = 10; // Global variable
void print_from_shared(); // Forward declaration of the function from shared.cpp



void print_from_shared() {
    cout << "This function is defined in shared.cpp" << endl;
    cout << "Value of a: " << a << endl; // Accessing the global variable 'a'
}