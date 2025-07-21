// multi class 

#include <iostream>
using namespace std;

class male;
class person
{
private:
    /* data */
    int age;
public:

void set(int a){
    age =a;
}

friend void display(male, person);
    
};


class male
{
private:
    /* data */
    int weight;
public:

void set(int wt){
    weight =wt;
}

friend void display(male, person);
    
};



void display(male m1 , person p1){

    cout << "Display form person and male" << m1.weight << p1.age;
}






int main() {


    male m2;
    m2.set(70);
    person p2;
    p2.set(25);

    display(m2,p2);
     
    return 0;
}