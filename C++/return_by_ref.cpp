//return by refrence 
#include <iostream>
using namespace std;

int &min (int &a,int &b){

    return (a<b)?a:b;
}

int a,b;
int main() {

    cout << "Enter two integers: ";
    cin >> a >> b;
    int minimum = min(a, b); // This will set the minimum value to 0

cout << "The minimum is: " << minimum << endl;
    return 0;
}