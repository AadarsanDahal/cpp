/*BASIC FILE HANDLING OPERATION*/


//OPEN
//Read/Write
//Close 


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Variable to store each line read from the file

int main() {

    string line;  //Variable to store each line read from the file

    // ofstream myfile("example.txt");  //OPEN
    // myfile << "Hello, World!" << endl;  //Read/Write
    // myfile << "This is line 2 " << endl; //Read/Write
    // myfile.close();//Close 


    ifstream myfile("example.txt");  //OPEN
    if (myfile.is_open())   //Check if file is open
    {
        while (getline (myfile,line)) 
        {
            /* code */
            cout << line << endl;  //Read/Write

        }
        myfile.close();  //Close
        
        /* code */
    }
     else
    {
        /* code */
        cout << "Unable to open file" << endl;  //Error handling
    }
    
    

    return 0;
}