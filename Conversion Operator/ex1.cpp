#include <iostream>
using namespace std;

class samaya {
private:
    int minutes;
    int hours;

public:
    // Constructor to initialize hours and minutes
    samaya(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    // Method to set data
    // void set_data(int h, int m) {
    //     hours = h;
    //     minutes = m;
    // }

    // Method to display time
    void display() {
        cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
    }

    // Overloaded > operator to compare two samaya objects
    int operator >=(samaya t6) {
        // Convert both times to total minutes
        int totalmin1 = hours * 60 + minutes;
        int totalmin2 = t6.hours * 60 + t6.minutes;

       if (totalmin1 == totalmin2)  // Compare total minutes
       {
           return 0; // Current object is greater
       }
      else if (totalmin1 > totalmin2) {
           return 1; // Current object is greater
           }
           else {
           return 2; // Current object is not greater
           }
      

     
        // Return true if current object is greater
    }
};

int main() {
    int hrs, min;
    cout << "Enter hours and minutes for t1: ";
    cin >> hrs >> min;

    samaya t1(hrs, min); // Create object t1
    t1.display();        // Display t1's time

    int hrs2, min2;
    cout << "Enter hours and minutes for t2: ";
    cin >> hrs2 >> min2;

    samaya t2(hrs2, min2); // Create object t2
    t2.display();          // Display t2's time



    int check = t1 >= t2; 
    // Compare t1 and t2 using the overloaded > operator
    if (check == 0) {
        cout << "both equal" << endl;
    } else if (check == 1) {
        cout << "t1 is greater" << endl;
    }
    else {
        cout << "t2 is greater" << endl;
    }

    return 0;
}