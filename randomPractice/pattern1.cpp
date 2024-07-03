#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cout<<"Enter the number of row : ";
    cin>>n;
    
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<col;
        }
        cout<<endl;
    }

    for(int row=n-1;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
    cout<<"\n"<<endl;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<row;
        }
        cout<<endl;
    }

    for(int row=n-1;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<row;
        }
        cout<<endl;
    }
    cout<<"\n"<<endl;

    for(int row=1;row<=n;row++)
    {
        //space printring
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        
        //value printing
        for(int col=1;col<=row;col++)
        {
            
            cout<<row;
        }
        cout<<endl;
    }

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


    cout <<endl<<endl;
    return 0;
}