#include <iostream>
using namespace std;

class length
{
private:
    /* data */

float feet;
public:

length (float f){
    feet =f;
}
void dispaly (){
    cout << "The value of feet is " << feet << endl;}

    length operator ++ (){
          ++feet; // Increment feet by 1

        return length(feet); // Increment feet by 1 and return a new length object
    }
};


int main() {
     
length l1 (3.14);
l1.dispaly();
length l2 = ++l1; // Call the overloaded operator
l2.dispaly(); // Display the incremented value

    return 0;
}