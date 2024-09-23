#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    cout<<"Welcome to Number Guessing game.\n You have to guess a number between 1 to 6. \n Let's begin."<<endl;
    while(true)
    {   
        int guessNum, randNum;
        cout<<"Guess a number : ";
        cin>>guessNum;

        randNum = rand()%6 + 1;
        
        if(randNum == guessNum)
        {
            cout<<"You've won."<<endl;
            break;
        }
        else 
        {
            count++;
            cout<<"Sorry!You've lost. Try again. Counter = "<<count<<endl;
        }
    }


    cout<<endl<<endl<<endl;
    return 0;
}