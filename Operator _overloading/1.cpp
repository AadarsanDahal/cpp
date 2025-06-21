
//OPERATOR OVERLOADING

#include <iostream>
using namespace std;


class student
{
    public:
  /* data */
    string name;
    int roll;


    student(){
        roll=0;
        
    }

    void dispaly(){
            cout << "roll is " << roll << endl;
    }
 

   void operator ++ (){    //operator function
                 ++ roll;
            /*LOGIC*/
    }

};


int main() {

    student s1;
    s1.dispaly();
     ++s1;
    s1.dispaly();
     
    return 0;
}

//Unary -0  parameters 
//Binart 1 