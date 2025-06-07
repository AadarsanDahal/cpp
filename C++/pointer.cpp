#include <iostream>
int main(){
    int x = 10;
    int* p = &x; // Pointer to x
    int *f = p;
    std::cout << "Value of x: " << x << std::endl; // Output: 10
    std::cout << "Value pointed to by p: " << *p << std::endl; // Output: 10
    std::cout << "Value pointed to by f: " << *f << std::endl; // Output: 10

    return 0;
}