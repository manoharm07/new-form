#include<iostream>
#include<time.h>
#include<algorithm>
using namespace std;
string c,inp,p;

void computer()
{
    int move;
    cout<<"computer enter your option"<<endl;
    srand(time(0));
    move = 1+(rand()%3);
    if(move==1)
     {
         cout<<"rock"<<endl;
         c = "rock"; 
     }
    else if(move==2)
      {
        cout<<"paper"<<endl;
        c = "paper";
      }
    else
      {
      cout<<"scissors"<<endl;
      c = "scissors";
      }
}

void menu()
{
    cout<<"Welcome to rock paper scissors"<<endl;
    cout<<"Press 1 to play game and 2 to quit game"<<endl;
}

void end_game()
{
    if(p=="rock" && c=="scissors" || p=="scissors" && c=="paper" || p=="paper" && c=="rock")
       cout<<"You won the Game!!!"<<endl;
    
    else if(c=="rock" && p=="scissors" || c=="scissors" && p=="paper" || c=="paper" && p=="rock")
       cout<<"You lost the Game"<<endl;

    else if(c==p)
       cout<<"The match is a draw"<<endl;
      
    else
       cout<<"Invalid input"<<endl;
}

int main()
{
    int choice;
    menu();
    cin>>choice;
    while(choice==1)
    {   
        cout<<"Player enter your option"<<endl;
        cin>>inp;
        p = inp;
        transform(inp.begin(),inp.end(),inp.begin(), :: tolower);
        while(choice==1)
        {
        if(inp=="rock" || inp=="paper" || inp=="scissors") 
        {
           computer();
           while(choice==1)
           {
               end_game();
               choice=2;
               break;
           }
        }
        else
        {
          cout<<"Invalid input"<<endl;
          cout<<"Enter a valid input"<<endl;
          cin>>inp;
          choice==1;
        }
        }
    cout<<"\n\n";
    cout<<"Would you like to play again "<<endl;
    cout<<" 1 for yes | else others for no "<<endl;
    cin>>choice;
    if(choice==1)
    {
      menu();
      cin>>choice;
    }
    else
     break;
    }

    return 0;
}
