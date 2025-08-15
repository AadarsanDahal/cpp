#include <iostream>
using namespace std;

class base {
    public:
     virtual ~  base() {
        cout << "Destructor called for baase" << endl;
      }
    };

class cat : public base {
    public:
    ~  cat() {
        cout << "Destructor called for cat" << endl;
      }
    };

int main() {

    base *p= new cat();
    delete p;
    
     
    return 0;
}