#include <iostream>
using namespace std;

int findmax(int a, int b){
    return(a>b)? a:b;
}
float findmax(float a, float b){
    return(a>b)? a:b;
}
double findmax(double a, double b){
    return(a>b)? a:b;

}
char findmax(char a, char b ){
    return(a>b)? a:b;
}






int main() {
     cout<<"Max value: "<<findmax(5,10)<<endl;  //int values out 10
     cout<<"Max value: "<<findmax(5.45,3.24)<<endl;  //float values out 5.45
     cout<<"Max value: "<<findmax("A","B")<<endl;  //float values out 5.45
     cout<<"Max value: "<<findmax('a','b)<<endl;  //float values out 5.45

     double d1= 34.56 , d2 = 45.78 ;
     cout<<"Max value: "<<findmax(d1,d2)<<endl;  //float values out 5.45

   
}