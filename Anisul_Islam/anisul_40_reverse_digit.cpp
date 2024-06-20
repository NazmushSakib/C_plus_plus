#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, temp, revNum=0, quotient, rem, sum, sumOfDigits=0; 
    cout <<"<---------This program will revrse the digits of an input number-------->"<<endl;
    cout <<"Enter an integer number : ";
    cin >>num;
    temp = num;
    while(temp!=0)
    {
        rem = temp % 10;
        
        sumOfDigits = sumOfDigits + rem;
      
        revNum = revNum * 10 + rem;
        quotient = temp /10;
        temp = quotient;
    }
    cout <<"The sum of the digits : "<<sumOfDigits<<endl;
    cout <<"The reverse number is : "<<revNum<<endl;
    return 0;
}