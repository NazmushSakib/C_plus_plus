#include <bits/stdc++.h>
using namespace std;

int main ()
{
    for(int i=1;i<=20;i+=2)
    {
        if(i==11)
        {
            break;
        }
        cout<<"1st loop number is : "<<i<<endl;
    }

    cout<<"--------------------------1st loop End-----------------------------"<<endl;

    for(int j=1;j<=6;j++)
    {
        if(j==5)
        {
            continue;
        }
        cout <<"2nd loop number is : "<<j<<endl;
    }

    cout<<"--------------------------2nd loop End-----------------------------"<<endl;

    for(int k=1;k<=100;k+=3)
    {
        if(k==10)
        {
            continue;
        }
        if(k>13)
        {
            break;
        }
        cout <<"3rd loop number is : "<<k<<endl;
    }
    cout<<"--------------------------3rd loop End-----------------------------"<<endl;

    return 0;
}