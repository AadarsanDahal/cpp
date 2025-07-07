#include <iostream>
using namespace std;


class money
{
private:
    /* data */
    int rs;
    int paisa;
    float NRS;
public:




    money(int r, int p) {

    rs = r;
    paisa=p;
}



/// Converting to NRS

operator float(){
    NRS = paisa + (rs*100);
    return NRS;
}

void display (){
    cout << "Money: " << rs << " rupees and " << paisa << " paisa" << endl;
    
}

  
};




int main() {
     
money t1(1, 50); 
t1.display(); // Display t1's money
float total_paisa =t1.operator float();
cout << "Total in paisa: " << total_paisa << endl;


    return 0;
}