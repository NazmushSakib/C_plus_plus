#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of row : ";
    cin>>n;
//for binary digit
    for(int row=1;row<=n;row++)   
    {
        //space printing
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //value printing
        for(int col=1;col<=row;col++)
        {
            cout<<col%2<<" ";
        }
        cout<<endl;
    }

    for(int row=n-1;row>=1;row--)
    {
        //space printing 
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //value printing 
        for(int col=1;col<=row;col++)
        {
            cout<<col%2<<" ";
        }
        cout<<endl;
    }

// for * pyramid
        for(int row=1;row<=n;row++)   
    {
        //space printing
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //value printing
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int row=n-1;row>=1;row--)
    {
        //space printing 
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //value printing 
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


    cout<<"\n"<<endl;
    return 0;
}