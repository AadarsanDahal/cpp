#include <iostream>
#include <fstream>
using namespace std;


//copying from file 1 to file 2 





int main() {

    char ch;

    ifstream source("example.txt");  //OPEN source file
    ofstream destination("copy.txt");  //OPEN destination file

    while (source)
    {
        /* code */

        source.get(ch);
        destination.put(ch);  //Read/Write from source to destination
    }

    source.close();  //Close source file
    destination.close();  //Close destination file

    cout << "File copied successfully!" << endl;  //Confirmation message
    
     
    return 0;
}