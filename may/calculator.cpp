

#include <iostream>
using namespace std;

int n1, n2, result, s =0 ;
int add (int , int);
int sub (int , int);
float divide (int , int);
int mod (int , int);

int main (){

bool running_loop =true;


while (running_loop)
{
   
    
    cout << "Enter a num to do the oprtation \n 1. + \n 2. - \n  \n 3. / \n 4. % " << std::endl;
cin >> s;
switch (s)
{

    case 1:
    result = add(n1, n2);
    cout << "The sum is " << result << endl;
            break;

    case 2:
    result = sub(n1, n2);
    cout << "The sub is " << result << endl;
            break;
    case 3:
    result = divide (n1, n2);
    cout << "The div is " << result << endl;
            break;
    case 4:
    result = mod (n1, n2);
    cout << "the mod is " << result << endl;
            break;

    case 5:
    cout << "Exiting the program " << endl;
         running_loop = false;
            break;
}
}



}

int add (int n1, int n2){
    cout << "Enter two num to add " << endl;
    cin >> n1 >> n2;
    result = n1 + n2;
    cout << "The sum is function output " << result << endl;
    return result;
}


int sub (int n1, int n2){
    cout << "Enter 2 num to sub " << endl;
    cin >> n1 >> n2;
return n1 - n2;
}


float divide (int n1, int n2){
cout << "Enter 2 num to divide " << endl;
cin >> n1 >> n2;
float div = n1 / n2;
return div;

}


int mod (int n1, int n2){
cout << "Enter 2 num to mod " << endl;
cin >> n1 >> n2;
return n1 % n2;  
}