#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, n;
    cout<<"Enter the value of n : ";
    cin>>n;
/*
    1
    12
    123
*/
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
/*
    123
    12
    1
*/
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }




    cout<<"\n\n"<<endl;
    return 0;
}