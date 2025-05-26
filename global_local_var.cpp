//testing local and global var


#include<iostream>
using namespace std;
int a = 0;
int main()
{
    int a = 5;

    cout << "local variable " << a << endl;
    cout<<"globar var " << ::a << endl;
    ::a =10;
    cout << "after update  " <<endl;
    cout<<"globar var " << ::a << endl;
    cout << "locall variable" << a << endl;

    return 0;

}