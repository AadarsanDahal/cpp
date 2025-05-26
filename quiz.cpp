// ok so quiz game 
// user enters name 
// ask questions 
// and if correct add points
// and if wrong go to next question 


#include<iostream>

using namespace std;

char questions[10][100] = {
    "What is the capital of France?",
    "What is 2 + 2?",
    "What is the largest planet in our solar system?",
    "Who wrote 'Romeo and Juliet'?",
    "What is the chemical symbol for gold?",
    "What is the speed of light in vacuum?",
    "Who painted the Mona Lisa?",
    "What is the smallest prime number?",
    "In which year did World War II end?",
    "What is the main ingredient in guacamole?"
};

char answers[10][100] = {
    "Paris",
    "4",
    "Jupiter",
    "William Shakespeare",
    "Au",
    "3*10^8",
    "Leonardo da Vinci",
    "2",
    "1945",
    "Avocado"
};

int score = 0;

string name ;
string ans;
int main (){

cout << "Welcome to the quiz game!" << std::endl;
cout << "Enter your name: ";

cin >> name;
cout << name;


for (int i = 0; i < 10; i++)
{

cout << questions[i] << endl;
cin >> ans;

if (ans == answers[i])

{
cout << "Correct!" << endl;
score++;
cout << "Score " << score << endl;
}
else
{
    cout << "Wrong ans " << endl;
}
}


cout << name << "Your Score is " << score << endl;
cout << "Thanks for playing! \n" << endl;


    return 0;
}