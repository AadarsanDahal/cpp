#include <iostream>
using namespace std;

class human{
   
    private:
    int age;

public:

void setdata(int age){
    this -> age = age;
 
 }

void show_data(){

   cout << "this is Human class " << age << endl;
}



virtual ~human(){
    cout << "Virtual Human Called" << endl;
    }
};


class male : public human
{
private:
    /* data */

    
    
public:




 ~male(){
    cout << "distructure called for male " << endl;
 }

   
};


int main() {

    human *h = new male();

   
    h -> setdata(30);
    h -> show_data();
    

    delete h;
   
     
    return 0;
}