#include <iostream>
using namespace std;

class item {
private:
    int qnty;
public:
 item (int i ){

     qnty = i;
 }

 void display (){

    cout << "The item is " <<  qnty << endl; 
 }

item operator  -- (){
        // item r2(qnty); // Create a new item object with the current quantity
        --qnty;
        // r2.qnty = qnty; // Decrement qnty by 1
        cout << "Itme's quantity decreased" << endl;
        return item (qnty);
    // Return an object 
     // Decrement qnty by 1
}


};

int main() {

    item i1(12);
  i1.display();
 
     
  item i2 = --i1; // Call the overloaded operator
  i2.display();
   

    return 0;
}