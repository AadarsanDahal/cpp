//static data members and function

#include <iostream>
using namespace std;


class student
{
private:
    /* data */
    int age;
    static int count ;
    string name;

public:



student (int a, string n){
    age = a;
    name = n;
    count++;
}

static void display_count(){
    cout<<"Count is: "<<count<<endl;
}


 void display (){
    cout<<"Name is: "<<name<<endl;
    cout<<"Age is: "<<age<<endl;
    cout<< "................."<<endl;
}

  
  
};


int student :: count = 0; //static data member initialization


int main() {

    student s1(20,"Aman");
    student::display_count();
    s1.display();


    student s2(20,"chaman");
    student::display_count();
    s2.display();


    student s3(20,"gaman");
    student::display_count();
    s3.display();
     
    return 0;
}


