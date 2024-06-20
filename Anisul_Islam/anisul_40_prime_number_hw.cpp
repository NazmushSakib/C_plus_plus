//find the prime numbers between a range using Function

#include<bits/stdc++.h>
using namespace std;

string primeNumber(int num)
{
    int count=0,rem;
    string ans;
    for(int i=2;i<num;i++)
    {
         rem = num%i;
         if(rem == 0)
         {
            count++;
            break;
         }        
    }
    if(count == 0)
    {
         ans =" is a Prime Number";
    }
    else
    {
        ans =" is not a prime number";
    }
    return ans;
}

int main()
{
    int num1, num2;
    cout <<"Enter 1st number(should be smaller than 2nd number) : ";
    cin >>num1;
    cout <<"Enter 2nd number : ";
    cin >>num2;

    if((num1>1)&&(num2>1))
    {
        for(int i = num1; i<=num2;i++)
        {
            cout <<i<<primeNumber(i)<<endl;
        }

    }
    else
    {
        cout<<"One of your entry is invalid, please check. "<<endl;
    }
    return 0;
}