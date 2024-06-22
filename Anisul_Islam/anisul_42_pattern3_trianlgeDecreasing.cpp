#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, n;
    cout<<"Enter the value of rows : ";
    cin>>n;
/*
    123
    12
    1
*/
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<"\n"<<endl;
/*
    333
    22
    1
*/
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    cout<<"\n"<<endl;

    cout<<"printing equivalent binary digit"<<endl<<endl;
/*
    101
    10
    1
*/
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col%2<<" ";
        }
        cout<<endl;
    }
    cout<<"\n"<<endl;
/*
    111
    00
    1
*/
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row%2<<" ";
        }
        cout<<endl;
    }
    cout<<"\n"<<endl;

    cout<<"printing A,B,C using ascii value"<<endl<<endl;
/*
    ABC
    AB
    A
*/
    
    for(row=n;row>=1;row--)
    {
        char alphabet = 'A';
        for(col=1;col<=row;col++)
        {
            cout<<alphabet++<<" ";
        }
        cout<<endl;
    }
    cout<<"\n"<<endl;
/*
    AAA
    BB
    C
*/
    char alphabet = 'A';
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<alphabet<<" ";
        }
        alphabet++;
        cout<<endl;
    }
    cout<<"\n"<<endl;
    
    cout<<"**printing\n"<<endl;
/*
    ###
    ##
    #
*/
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"#"<<" ";
        }
        cout<<endl;
    }


    cout<<"\n\n"<<endl;
    return 0;
}