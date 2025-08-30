//? Write a program to create a class named actor with data members name and rating. Initialize the data members and display those names whose rating is greater than 5 using the concept of constant object.

#include <iostream>
using namespace std;

class actor
{
private:
    /* data */

    string name;
    int rating;
public:
  
void setdata(string n, int r) {
    name = n;
    rating = r;
}

void display() const{
    if (rating > 5) {
        cout << "Name: " << name << ", Rating: " << rating << endl;
    }
}


};


int main() {


    actor a1, a2, a3,a4;

    a1.setdata("Actor One", 7);
    a2.setdata("Actor Two", 4);
    a3.setdata("Actor Three", 9);
    a4.setdata("Actor Four", 3);

    a1.display();
    a2.display();
    a3.display();       
    a4.display();

     



    return 0;
}