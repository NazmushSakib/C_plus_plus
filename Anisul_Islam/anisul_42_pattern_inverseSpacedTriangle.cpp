#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of row = ";
    cin>>n;
/* Pattern_1
123
 12
  1
*/
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
            cout<<col;
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_2
101
 10
  1
*/
    for(int row=n;row>=1;row--)
    {
        //spcae printing 
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<col%2;
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_3
abc
 ab
  a
*/
    for(int row=n;row>=1;row--)
    {
        char ch = 'a';
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col =1;col<=row;col++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
        
    }
    cout<<endl;
/* Pattern_4
***
 **
  *
*/
    for(int row =n; row>=1; row--)
    {
        //space printing 
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_5
333
 22
  1
*/
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
            cout<<row;
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_6
111
 00
  1
*/
    for(int row=n;row>=1;row--)
    {
        //space printing
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<row%2;
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_7
AAA
 BB
  C
*/
    char ch='A';
    for(int row=n;row>=1;row--)
    {
        
        //space printing
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1; col<=row;col++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
    cout<<endl;
/* Pattern_8
###
 ##
  #
*/
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
            cout<<"#";
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_9
CCC
 BB
  A
*/
    char bh = 'A';
    char dh = bh + (n-1);

    for(int row=n;row>=1;row--)
    {
        //space printing
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //value pritning
        for(int col=1;col<=row;col++)
        {
            cout<<dh;
        }
        
        cout<<endl;
        dh--;
    }
    cout<<endl;





    cout<<"\n"<<endl;
    return 0;
}
