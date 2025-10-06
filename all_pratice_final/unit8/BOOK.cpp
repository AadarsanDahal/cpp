//10
//Create a class BOOK with data members name and price. Write a member function that will take two objects of BOOK class and return the object with lower price.



#include <iostream>
using namespace std;


class BOOK
{
private:
    /* data */

    string name;
    float price;
public:

void getdata(string name, float price){
    this -> name=name;
    this -> price =price;

}
BOOK compare (BOOK obj){
    BOOK temp;

    if (price < obj.price){
        return *this;
    }
    else{
        return obj;
    }
}


void display(){

    cout <<"lower boook is: "<<name<<endl;
    cout <<"Book price is: "<<price<<endl;
    cout<<"............."<<endl;

}

};



int main() {

    BOOK b1,b2,lowest;

    b1.getdata("Book A",500);
    b2.getdata("Book B",300);


     lowest= b1.compare(b2);
        lowest.display();

    
     
    return 0;
}