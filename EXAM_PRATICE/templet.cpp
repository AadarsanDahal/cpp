#include <iostream>
using namespace std;

//templet 

//functional templet 

template <class T>

T find_sum(T a , T b) {
    return a + b;

}

int main() {

    int a = 10, b = 20;
    float x = 5.5, y = 4.5;
    
    cout << "Sum of integers: " << find_sum(a, b) << endl;
    cout << "Sum of floats: " << find_sum(x, y) << endl;    
     
    return 0;
}