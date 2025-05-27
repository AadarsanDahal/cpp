#include <iostream>
using namespace std;

//meue 
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit

//program to mimic ATM


 int total_balence=0;
int main() {


    bool running_loop = true;
   int pin_usr,pin = 1234; //pre_defined pin

cout << "Welcome TO ATM \n enter pin"<<endl;
cin >> pin_usr;


    if (pin == pin_usr)
    {
         
 while (running_loop)
{
        int s; 


cout<<"Welcome  please  "<<endl;
cout<<"1. Check Balance"<<endl;
cout<<"2. Deposite"<<endl;
cout<<"3. withdraw"<<endl;
cout<<"4. exit"<<endl;

cin >> s;

switch (s)
{
case 1:
 cout <<"your balence is " << total_balence<<endl;
    break;
case 2:
int num ;
cout <<"enter the amt " <<endl;
cin >> num;
total_balence= total_balence+num;
break;

case 3:
int withdraw;
cout << "enter the amount to withdraw " <<endl;
cin >> withdraw;
if (withdraw > total_balence){
    cout << "insufficent balance " <<endl;
}
else
{
    total_balence =  total_balence - withdraw;
    cout << "you have withdrawn RS "<< withdraw;
}

break;

case 4:
running_loop = false;
break;

default:

cout <<"Enter a valid num "<<endl;
break;
}

    }
    
    }
    

    else
    {
        cout << "invlid pin"<<endl;
    }
    


    return 0;
}