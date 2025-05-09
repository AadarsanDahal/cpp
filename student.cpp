// 3. **Student Grade Management**

//    * Input student marks, calculate total and grade.
//    * Use **arrays**, **functions**, **scope**, and **storage class**.



// make array of students
// should take input of n subjects  
// calculate total 
// calculate percentage 
// calculate grade


#include<iostream>

#include <chrono>
#include <thread>


void delay(int milliseconds) {
  std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

using namespace std;

int c;

int main(){

    cout<<"Enter the number of subject: " << endl;
    cin >> c;
    int s[c];

    for (int i = 0; i < c; i++)
    {
        cout << "Enter the marks of student in sub " << i+1 << endl;
        cin >> s[i];
    }
    

    // Input taken now 


    //calculating total
 float total=0;
for (int i = 0; i < c; i++)
{
   
   total = total + s[i];
}

cout << "The total marks are " << total << endl;


delay(1500);

//clacluating percentage 

float p =total/(c*100)*100;
cout << "The percentage is  \n" << p << endl;

//Grade claculation


if (p>=90)
{
   cout<< "A+";
}
else if (p>=80)
{
   cout<< "A";
}


    return 0;
}