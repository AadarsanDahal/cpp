#include <iostream>
#include "shared.cpp" // Include the header file for shared.cpp
using namespace std;

void print_from_shared(); // Forward declaration of the function from shared.cpp
extern int a; // Declaration of an external variable
int main() {

    cout << "This is a message from exterm.cpp" << endl;
    cout << a << endl; // Accessing the external variable 'a'

print_from_shared(); // Call to the function defined in shared.cpp     
    return 0;
}