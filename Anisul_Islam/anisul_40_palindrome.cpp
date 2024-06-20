#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, rem, sumOfDigits=0, revNum=0, temp;
    cout <<"<---------This program will calculate sum of digits, reverse number, checking palidrome----->"<<endl<<endl;
    cout <<"Enter an integer number : ";
    cin >>num;
    
    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sumOfDigits = sumOfDigits + rem;
        revNum = revNum * 10 + rem;
        temp = temp / 10;
    }
    cout <<"Sum of digits : "<<sumOfDigits<<endl;
    cout <<"Reverse number : "<<revNum<<endl;
    
    if(num == revNum)
    {
        cout <<"It is a palindrome number."<<endl;
    }
    else
    {
        cout <<"It is not a palindrome number."<<endl;
    }

    return 0;
}