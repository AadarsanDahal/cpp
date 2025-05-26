#include <iostream>
using namespace std;


float celcius , farenhite;


int main (){
cout << "enter the temp in Celcius" <<endl;
cin >> celcius;
farenhite = (celcius *9/5) +32;
cout << "the temp in farenhite is : " <<farenhite<<endl;


float c= (farenhite-32) *5/9;
cout <<"temperature in celcius iss " <<c<<endl;
return 0;
}