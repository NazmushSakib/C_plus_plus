#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sumOfDigits=0, num, rem, temp, revNum=0, armNum=0;
    cout <<"<------This program will calculate ArmstrongNumber------>"<<endl<<endl;
    cout<<"Enter an integer number : ";
    cin >> num;
    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sumOfDigits = sumOfDigits + rem;
        revNum = revNum * 10 + rem;
        temp = temp /10;
        armNum = armNum + (rem*rem*rem);
    }
    cout <<"The sum of digits = "<<sumOfDigits<<endl;
    cout <<"The reverse number = "<<revNum<<endl;

    if(num == revNum)
    {
        cout <<"This is a palindrome number."<<endl;
    }
    else
    {
        cout <<"This is not a palindrome number."<<endl;
    }

    if(num == armNum)
    {
        cout <<"This is a Armstrong number.\n"<<endl;
    }
    else
    {
        cout <<"This is not a Armstrong number.\n"<<endl;
    }


    return 0;
}