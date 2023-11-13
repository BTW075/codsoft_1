#include <iostream>
#include <random>
using namespace std;

int main() {
    srand((unsigned) time(NULL));
    int input,choice;
    cout << "**WELCOME TO NUMBER GUESSING GAME!**" << endl;
   
   do{
    int random = 1 + ( rand() % 10);
    cout << "Press 1 to PLAY!" << endl;
     cout << "Press 2 to EXIT" << endl;
     cin >> choice;
     
     switch(choice){
         
         case 1:     cout << "Guess a number between 1-10!"<<endl;
        do{
        cin >> input;
   
        if(input==random){
       cout << "GREAT! Your guess was correct.\n"<<endl;
        }
        else if(input<random){
       cout << "Oops... Your guess is too low.\nTRY AGAIN"<<endl; 
        }
         else if(input>random){
       cout << "Oops... Your guess is too high.\nTRY AGAIN"<<endl;
        }
        }while(input!=random);
        break;
        
        
        case 2: cout <<"Thank You!\nExiting...";
        }
   }while(choice!=2);

    return 0;
}
