#include <iostream>

int& swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return a; // Returning reference to the first swapped variable
}
int main() {
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    
    // Call swap function
    int &p = swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
    p =100;
    std::cout << "p  = " << p << std::endl;

    return 0;
}