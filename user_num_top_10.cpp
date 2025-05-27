#include <iostream>
using namespace std;

int usr_num;

int main() {
     


    // for (int i = 10; i >=0;  i=i-2)
    // {
    //  cout << i << endl;
    // } 
    

  
//     int a=0;
//     bool running_loop = true;

// while (running_loop)
// {
// cout << "enter a num" << endl;
// cin >>a;

// if (a <0)
// {
//    cout << "neg num" <<endl;
//    running_loop = false;
//    break;
// }

// else (a >= 0);
// {
//     cout << "positive num" << endl;
   
// }

float n,n2;


bool condition = true;

// do
// {
//    cout << "enter a num" << endl;
//    cin >> n;



//    if (n<0.00){
//     cout << "negative num" << endl;
//     condition = false;
//     break;
//    }

//    else
//    {
//     cout << "Positive num " << endl;
//    }
   
// } while (condition);
do
{
   cout << "enter a num" << endl;
   cin >> n;



   if (n<0.00){
    cout << "negative num" << endl;
    condition = false;
    break;
   }

   else
   {
    cout << "Positive num " << endl;
   }
   
} while (condition);





    return 0;
}


/*
10
8
6
4
2
0
*/