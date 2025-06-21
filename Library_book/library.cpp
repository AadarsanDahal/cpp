#include <iostream>
using namespace std;

class book
{
private:
    /* data */
    int date;
    mutable string name;
    string author;
    string publisher;
    static int total_books;
    mutable string last_accessed;
public:
    book(int d, string a, string n, string p) {
        date = d;
        author = a;
        name = n;
        publisher = p;
        total_books++;
    }    

    void display (){

        cout << "................."<<endl;
        cout << "Date: " << date << endl;
        cout << "Author: " << author << endl;
        cout << "Name: " << name << endl;
        cout << "last ascessed by "<< last_accessed << endl;

    }

    void new_title (string new_name) const{
            name = new_name;
    }

   static void get_total_books () {
 cout << "Total Books: " << total_books << endl;
    }

    void last_accessed_by(string new_user) const {
        last_accessed = new_user;
    }



};

int book:: total_books = 0;
int main() {
     

    book b1(2023, "Author A", "Book One", "Publisher X");
    b1.last_accessed_by("User1");
    b1.new_title("New Book One");
    b1.display();
    book ::get_total_books();



   book b2(2024, "Author B", "Book Two", "Publisher Y");
    b2.last_accessed_by("User2");
    b2.display();
    b2.new_title("New Book Two");
    b2.display();
    book ::get_total_books();

    return 0;
}