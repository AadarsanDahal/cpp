
//u2u

// //can be done using 2 method 
// Source class : 
// -> give operator 

// Destination cclass
// -> one arg.constructor   (Source class's object)

#include <iostream>


using namespace std;


class FPS
{
private:
    /* data */
    int feet;
    int inch;
public:

FPS (int f, int i) {
    feet = f;
    inch = i;
}

void display(){
    cout << "Distance: " << feet << " feet and " << inch << " inches" << endl;
}


FPS (MKS m3){
    //Conversion Logic 

    

}
   
};




class MKS
{
private:
    /* data */

    int km;
    int meter;
public:


    MKS(int k, int m) {
        km = k;
        meter = k;
    }

    void display() {
        cout << "Distance: " << km << " kilometers and " << meter << " meters" << endl;
    }


    // operator FPS (){
    //             int a = km *3280;
    //             int b = meter * 40;
    //             a= a+ (static_cast<int>(b/12));
    //             b= b % 12;
    //     return FPS(a, b);
    // }
    
};




int main() {

    MKS m1(2, 50); // 2 kilometers and 500 meters
    m1.display(); // Display m1's distance
    FPS f1=m1;
    f1.display(); // Display f1's distance
     
    return 0;
}