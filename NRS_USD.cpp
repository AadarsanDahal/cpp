//2 ways to convert user to user 
// Source class 
// Define operator and make changes in value 
//needed temperory values

//Distination class
// make constructor by passing value through function 


#include <iostream>
using namespace std;


class NRS
{
private:
    /* data */

    int rs;
    int paisa;
public:
    
NRS (int r, int p){

    rs = r;
    paisa = p;
}

void display (){
cout << "the NRS and paisa are " << rs  << " and " <<paisa << endl;

}


int ret_pai(){
    return paisa;
}

int ret_rup(){
    return rs;
}


// operator USD (){
//     int a = rs *138;
//     int b = paisa *50;
//     return USD(a,b);
// }


};


class USD
{
private:
    /* data */

    int dol;
    int cent;
public:

USD (int d, int c){

    dol =d;
    cent =c;

}

USD (NRS temp1){
    //Conversion logic 
    int r = temp1.ret_rup();
     int p = temp1.ret_pai();
   
     int total_dol= r*138;
        int total_cent = p*50;

        total_cent = cent;
        total_dol = dol ;
}

void display (){

    cout << "the dollar and cent are " << dol << " and " << cent << endl;
  
}


    
};







int main() {
     
NRS n1(10, 10); // 2 dollars and 50 cents
n1.display(); // Display n1's NRS
USD u1 = n1;
u1.display();

    return 0;
}