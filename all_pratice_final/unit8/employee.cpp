#include <iostream>
#include <fstream>
using namespace std;

int main() {

    fstream file;

    file.open("/home/aadarsan/cpp/all_pratice_final/unit8/employee.txt",ios::out);
     
    if (!file){
        cout<<"File not found Creating it "<<endl;
    }
    else
    {
        /* code */
        cout<<"File found "<<endl;
    }


    int id;
    string name;
    int salery;

  
cout<<"Enter number of employee data you want to enter "<<endl;
int count;
cin>>count;





for (int i = 0; i < count; i++)
{
    /* code */
    cout<<"Enter employee id: ";
    cin>>id;
    cout<<"Enter employee name: ";
    cin>>name;
    cout<<"Enter employee salery: ";    
    cin>>salery;
}

    return 0;
}