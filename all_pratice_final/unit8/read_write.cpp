#include <iostream>
#include <fstream>
using namespace std;





int main() {

fstream file,file1;

file.open("/home/aadarsan/cpp/all_pratice_final/unit8/read_write.txt", ios::out); // No mdoe specified

if (!file){
    cout<<"File not found Creating it "<<endl;
}
else
{
    /* code */
    cout<<"File found "<<endl;
}

file<<"Hello World"<<endl;
file<<"Welcome to C++ programming"<<endl;


cout<<"Data written to the file"<<endl;


file.close();

 
    return 0;
}