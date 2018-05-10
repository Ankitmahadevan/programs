#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class rps
{
public:
int p1score=0,botscore=0,tiescore=0,choice;
int ai;
public:
int  botmove()
{

srand (time(NULL));
ai=rand()%3+1;
return ai;

}

void printinstruction()
{
cout << " play game" << endl;
cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;

}
void checkwin(int choice,int ai)
{

    if(choice== 1 && ai == 1){
         cout << "Rock meets Rock its a tie!" << endl;
         tiescore++;
         }
    else if(choice ==1 && ai== 2){
         cout << "Rock is covered by Paper the computer wins!." << endl;
         botscore++;

         }
    else if(choice == 1 && ai == 3){
         cout << "Rock crushes Scissors you win!" << endl;
         p1score++;
         }
    else if(choice == 2 && ai == 1){
         cout << "Paper covers Rock you win!" << endl;
         p1score++;

         }
    else if(choice == 2 && ai == 2){
         cout << "Paper meets Paper its a tie!" << endl;
         tiescore++;
         }
    else if(choice == 2 && ai == 3){
         cout << "Paper is cut by Scissors the computer wins!" << endl;
         botscore++;

         }
    else if( choice == 3 && ai == 1){
         cout << "Scissors are crushed by Rock computer wins!" << endl;
         botscore++;

         }
    else if( choice == 3 && ai == 2){
         cout << "Scissors cuts Paper you win!" << endl;
         p1score++;
         }
    else if(choice == 3 && ai == 3){
         cout << "Scissors meet Scissors its a tie!" << endl;
         tiescore++;
         }
    else{
         cout << "You didn't select 1, 2, or 3" << endl;
         }
}
void updatescore()
{
cout<<"it's my score:  "<<p1score<<endl;
cout<<"it's computer score:  "<<botscore<<endl;
cout<<"tie scorew:   "<<tiescore<<endl;

}

};
class game : public rps
{
public:
int choice;

public:
int userinput()
{
cout<<"enter user input"<<endl;
cin>> choice;
return choice;
}
};
int main()
{
game a;
while(a.p1score<=a.botscore)
{
int p=a.botmove();
a.printinstruction();
int w=a.userinput();
a.checkwin(w,p);
a.updatescore();
}
return 0;
}
