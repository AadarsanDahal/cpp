//What types of exception can be encountered in file handling? Write a program to create a class named MOVIE with data members name and genre. If the genre of the movie is comedy then write it to COMEDY.DAT and if the genre is action, write it to ACTION.DAT


#include <iostream>
#include <fstream>

using namespace std;

class movie
{
private:
    /* data */

  
public:

 string name;
 string genre;



void getdata( string name, string genre){
    this -> name=name;
    this -> genre =genre;
}

   
void display(){
    cout<<"Movie name is: "<<name<<endl;
    cout<<"Movie genre is: "<<genre<<endl;

    cout<<"............."<<endl;
}

};






int main() {

fstream file1,file2;

file1.open("/home/aadarsan/cpp/all_pratice_final/unit8/COMEDY.DAT", ios::app); //append mode
file2.open("/home/aadarsan/cpp/all_pratice_final/unit8/ACTION.DAT", ios::app); //append mode

//now that they are open in append mode 
     
movie m1;

m1.getdata("3 idiots","comedy");
m1.display();

if (m1.genre == "comedy")
{
    /* code */
    file1<<m1.name<<" "<<m1.genre<<endl;
    cout<<"Data written to comedy file "<<endl;
}
else if (m1.genre == "action"){
    file2<<m1.name<<" "<<m1.genre<<endl;
    cout<<"Data written to action file "<<endl;
}
else{
    cout <<"Genre not found "<<endl;
    
}

    return 0;
}