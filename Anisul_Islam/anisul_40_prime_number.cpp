#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, count = 0;
    cout <<"Enter an integer number : ";
    cin>>num;
    for(int i=2;i<num;i++)
    {
        if(num%i == 0)
        {
            count++;
            break;
        }       
    }
    
    if(count==0)
        {
            cout <<"The number you've entered is a Prime number."<<endl;
        }
        else
        {
            cout <<"The number you've entered is Not a Prime number."<<endl;
        }
    return 0;
}