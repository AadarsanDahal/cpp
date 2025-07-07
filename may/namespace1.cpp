#include <iostre m>


//:: // namespace Resolution Operator
using namespace std;

namespace global  //determining global var inside a namespace to avoid conflict
{
    int glo_a=10;
    

    namespace safal
    {
        int count =90;
        
        void speak (){
            cout << "halo ma safal " <<endl;

        }

    } // namespace name
    
} // namespace name


void printglobal(){

    cout<<"global variable" << global::safal::speak <<endl;
}
 



    
int main (){

printglobal();
    return 0;
}



