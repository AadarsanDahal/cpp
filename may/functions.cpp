
//inline functions

#include <iostream>
using namespace std;

//defination
inline int max (int ,int);

int main() {

    int a,b;
    cout << "enter 2 numbers" <<endl;
     cin >> a >> b;

     cout << max(a,b)<< endl;
    return 0;
}

int max (int a,int b){

    return (a>b)?a:b;

}