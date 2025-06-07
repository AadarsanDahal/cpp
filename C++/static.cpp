#include <iostream>
using namespace std;


void test (){
    static int a =0;
    a++;
    cout << "The value of a is: " << a << endl;

}

int main() {
     
    test();
    test();
    return 0;
}