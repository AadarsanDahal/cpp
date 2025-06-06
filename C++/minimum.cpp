#include <iostream>
using namespace std;

int a,b;

int minimum (int,int);
int main() {
    int j,k;
    cout << "Enter two integers: ";
    cin >> a >> b;
    minimum(a,b);
    
    return 0;
}

int minimum(int x, int y) {
    if (x < y) {
        cout << "The minimum is: " << x << endl;
        return x;
    } else {
        cout << "The minimum is: " << y << endl;
        return y;
    }
}