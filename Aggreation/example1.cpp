//Library and Book

#include <iostream>
using namespace std;

class book {
private:
    int bookID;
    string author;
   
public:
 void getdata(int id, string a) {

    bookID = id;
    author = a;
   
}

void showBook() {
    cout << "Book ID: " << bookID << ", Author: " << author << endl;
}

};


class library
{
private:
    /* data */

    string address;
    book b1;

public:

library(string addr, int id, string a) {
    address = addr;
    b1.getdata(id, a);

}

void showLibrary() {
    cout << "Library Address: " << address << endl;
    b1.showBook(); // Show book details
    
}

   
};

int main() {

    library lib("KTM", 101, "Aarsan");
    lib.showLibrary(); // Show library address and called function from book class

     


    return 0;
}