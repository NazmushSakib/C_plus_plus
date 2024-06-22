#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, n;
    cout<<"How much line do you print?\n Enter the value of n = ";
    cin >>n;
/*
    1
    12
    123
*/
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" " ;
        }
        cout<<"\n";
    }
    cout<<"\n"<<endl;
/*
    1
    22
    333
*/
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row <<" "; 
        }
        cout<<"\n";
    }
    cout<<"\n"<<endl;
/*
    1
    10
    101
*/
    cout<<"printing equivalent binary digit"<<endl<<endl;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col%2<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n"<<endl;
/*
    1
    00
    111
*/
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row%2<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n"<<endl;

    cout<<"printing A,B,C using ascii value"<<endl<<endl;
/*
    A
    AB
    ABC
*/
    for(row=1;row<=n;row++)
    {
        char alphabet = 'A';
        for(col=1;col<=row;col++)
        {
            cout<<alphabet++<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n"<<endl;
/*
    A
    BB
    CCC
*/
    char alphabet = 'A';
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<alphabet<<" ";
        }
        alphabet++;
        cout<<"\n";
    }
    cout<<"\n"<<endl;

    cout<<"printing a,b,c using ascii value"<<endl<<endl;
/*
    a
    ab
    abc
*/
    for(row=1;row<=n;row++)
    {
        char alphabet ='a';
        for(col=1;col<=row;col++)
        {
            cout<<alphabet++<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n"<<endl;
/*
    a
    bb
    ccc
*/

     char letter = 'a';
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<letter<<" ";
        }
        letter++;
        cout<<endl;
    }
    cout<<"\n"<<endl;

/*
    a
    bc
    def
    ghij
*/  letter = 'a';
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<letter++<<" ";
        }
        cout<<endl;
    }
    cout<<"\n"<<endl;

    cout<<"**printing\n"<<endl;
/*
    #
    ##
    ###
*/
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"# ";
        }
        cout<<"\n";
    }



    cout<<"\n\n"<<endl;
    return 0;
}