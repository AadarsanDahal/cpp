#include <iostream>
using namespace std;

class time {
private:
    int hour, minute;

public:
    // Default constructor
    time() {
        hour = 0;
        minute = 0;
    }

    // Parameterized constructor with normalization
    time(int h, int m) {
        hour = h + m / 60;
        minute = m % 60;
    }

    // Overloaded + operator with normalization
    time operator+(time t6) {
        time t7;
        t7.hour = hour + t6.hour;
        t7.minute = minute + t6.minute;
        return time(t7.hour, t7.mi);
    }

    // Display function
    void display() {
        cout << "Time: " << hour << " hours and " << minute << " minutes" << endl;
    }
};

int main() {
    time t1(2, 50);
    time t2(3, 30);
    time t3;

    t3 = t1 + t2;  // Adds t1 and t2, normalizes minute
    t3.display();

    return 0;
}
