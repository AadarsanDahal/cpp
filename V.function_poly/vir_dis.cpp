#include <iostream>
using namespace std;




class animal
{
private:

int age;
string name;
    /* data */



public:


void set_data() {


    age = 3;
    name = "Tommy";
}


void display() {
    cout << "Animal Name: " << name << endl;
    cout << "Animal Age: " << age << endl;
}


virtual ~animal() {
    cout << "Destructor called for animal" << endl;

}

};



class cat : public animal{
    
    
private:


int age ;
string name;
    /* data */
public:



    void set_data() {
        age = 2;
        name = "Tom";
        
    }
    

    void sound(){

    cout << "Meow Meow" << endl;

    }
    
    
    void display() {
        cout << "cat Name: " << name << endl;
        cout << "cat Age: " << age << endl;
    }
    
    
    ~cat() {
        cout << "Destructor called for cat meow moew " << endl;
    }
    
};



int main() {

animal *p = new cat();

p -> set_data(); // Accessing derived class function using base class pointer
p -> display(); // Accessing derived class function using base class pointer
// p -> sound(); // Accessing derived class function using base class pointer

delete p; // This will call both cat and animal destructors


     
    return 0;
}