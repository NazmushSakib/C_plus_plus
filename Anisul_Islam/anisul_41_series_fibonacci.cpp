#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1=0, num2=1, lastNum, sum=0, result=0;

    cout<<"Enter the last number of fibonacci series : ";
    cin >>lastNum;

    int i=0;
    while(i<=lastNum)
    {
        if(i<=1)
        {
            result = i;
        }
        else
        {
            result = num1 + num2;
            num1 = num2;
            num2 = result;            
        }
        
        i++;
        cout << result<<" ";
    }
   
    return 0;
}