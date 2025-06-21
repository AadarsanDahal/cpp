// 2. Create a class cat having private attributes: breed, color and weight.
// a. Create a default constructor that sets the breed, color and weight to Husky,
// Brown and 3.5.
// b. Also create a public function setdetails() that accepts the data provided by
// user and assigns to the private attributes.
// c. Also create another public function display() that displays the attributes.

// d. In the main module,
// i. Create an object c1 and display the values.
// ii. Again ask for inputs color, breed and weight from user and store in
// variables.
// iii. Create new object c2 and call the setdetails() method to assign the
// user given values and display the details.


#include <iostream>
using namespace std;

class cat
{
private:
    /* data */
    string breed;
    string color;
    float weight;

public:
// Default constructor 
cat (){
    breed = "Husky";
    color = "Brown";
    weight = 3.5;
}

void setdetails(string b, string c, float w) {
    breed = b;
    color = c;
    weight = w;
}

void dispplay (){

    cout << "Breed: " << breed << endl;
    cout << "Color: " << color << endl;
    cout << "Weight: " << weight << " kg" << endl;
}
   
};





int main() {

    cat c1; // Create object c1 using default constructor
    c1.dispplay(); // Display default values
     
    cout << "enter Breed , Color and weight of cat: "; 
 string b, c;
float w;
cin >> b>>c>>w;

cat c2; // Create object c2

c2.setdetails(b, c, w); // Set details using user input
c2.dispplay(); // Display the details of c2


    return 0;
}