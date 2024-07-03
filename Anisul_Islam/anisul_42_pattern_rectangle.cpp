#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of row : ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;
//Hollow Rectangle

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(row==1 || row==n || col==1 || col==n)
            {
                cout<<"*";
            }

            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }



    cout<<"\n"<<endl;
    return 0;
}