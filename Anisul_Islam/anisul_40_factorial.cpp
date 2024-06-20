#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fact =1, num;
    cout<<"-----This program is to calculate factorial-------"<<endl;
    cout<<"Enter any positive integer number : ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        fact = fact * i;
    }
    cout<<"The value is : "<<fact<<endl<<endl;

    return 0;
}