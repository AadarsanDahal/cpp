//Fiding the area of a circle 

#include <iostream>
#include <cmath>
using namespace std;
float radius,area;


int main (){
cout << "Enter the radius of the circle: \n ";
cin >> radius;
area = 3.14*pow(radius,2);
cout << "The area of the circle is: \n" << area ;
    return 0;
}
