#include <iostream>
// #include <chrono>
// #include <thread>
using namespace std;



int main() {
     int i;

    for ( i = 0; i < 10; i++)
    {
        /* code */
        // this_thread::sleep_for(chrono::seconds(1));
        cout << "for loop 10 times " << i<< endl;
    }
    

    int j=0;

    while (j<10)
    {
        j++;
                // this_thread::sleep_for(chrono::seconds(1/2));

        cout << "printing from while loop " << j << endl;
    }
    

    int k=0;

    do
    {
                // this_thread::sleep_for(chrono::seconds(1));

        cout << "printig form do while loop " <<k << endl;
        k++ ;
    } while (k<10);
    
    return 0;
}