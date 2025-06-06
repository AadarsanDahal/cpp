#include <iostream>  //standard input output stream library
// it is made up of two types i stream and o stream 




int main (){


    int n1=0,n2=0;
std::cout << "Welcome \n"; //output operator <<
std::cout << "enter 2 numbers" << std::endl;


std::cin >> n1 >>n2 ;
std::cout << "The sum of 2 num is " << n1+n2 << std::endl;

std::cout <<"enter 3 number ";
float n3,n4,n5;
std::cin  >> n3 >>n4 >>n5 ;

//SUM

float sum =0;
sum= n3+n4+n5;
std::cout << "SUM = " << sum << "\n"; //output operator <

// cin.get();

return 0;
}
