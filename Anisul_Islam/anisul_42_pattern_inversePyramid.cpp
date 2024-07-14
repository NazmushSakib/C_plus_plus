#include <bits/stdc++.h>
using namespace std;

int main()
{
    //inverse Pyramid
    int n;
    cout<<"Enter the value of row : ";
    cin>>n;

    for(int row=n;row>=1;row--)
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

//Alphabet inverse Pyramid

    
    for(int row=n;row>=1;row--)
    {
        //space printing 
        char ch ='A';
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
            
        }
        //value printing
        for(int col=1;col<=row;col++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }




    cout<<"\n"<<endl;
    return 0;
}