#include <iostream>
using namespace std;

//try, throw, catch with multiple exceptions

int main() {


    int a=25, b=5;
    
            try {
                if (b==0)
                {
                
                    throw "Division by zero error";
                }
                else if (a < 0){
                    throw a;
                }
                else{
                cout << "Result: " << a/b << endl;
            }
            }

            catch (const char* msg) {
                cout << "Caught exception: " << msg << endl;

            }

            catch (int x) {
                cout << "Caught exception: Negative value " << x << endl;
            }
            
    return 0;
}