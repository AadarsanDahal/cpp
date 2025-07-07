#include <iostream>
using namespace std;

class samaya {
private:
    int hour, minute;

public:
    // Default constructor
    samaya() {
        hour = 0;
        minute = 0;
    }

    // Parameterized constructor with normalization
    samaya(int h, int m) {
        hour = h;
        minute = m;
    }

    // Overloaded + operator 
    samaya operator +(samaya t6) {
        samaya t7;
        t7.hour = hour + t6.hour;
        t7.minute = minute + t6.minute;

        //Normalizing i hours
        if (t7.minute <=60){
            t7.hour=t7.minute/60;
            t7.minute=t7.minute%60;
            
        }
     
        return samaya(t7.hour, t7.minute);
    }

    // Display function
    void display() {
        cout << "samaya: " << hour << " hours and " << minute<<"minutes" << endl;

    }

};

int main() {
    
    samaya t1(2,30);

    t1.display();  // Display t1
    // t1.display();

    samaya t2(1,45);
    t2.display();

    samaya t3;

    t3 = t1 + t2;  // Adds t1 and t2, normalizes minute
    t3.display();

    return 0;
}
