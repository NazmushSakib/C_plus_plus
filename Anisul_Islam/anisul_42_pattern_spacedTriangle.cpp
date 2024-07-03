#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of row = ";
    cin>>n;
/*Pattern_1
    1
   12
  123
*/
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_2
    1
   10
  101
*/
    for(int row=1;row<=n;row++)
    {
        //printing space
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //printing binary digit
        for(int col=1;col<=row;col++)
        {
            cout<<col%2;
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_2
    A
   BC
  DEF
*/
    char alph='A';
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col =1;col<=row;col++)
        {
            cout<<alph;
            alph++;
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_3
    A
   AB
  ABC
*/
    for(int row=1;row<=n;row++)
    {
        char alphabet ='A'; //যেহেতু প্রত্যেক রো/লাইনের শুরুতে A দরকার তাই লুপের ভিতরে declare করা হলো
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<alphabet;
            alphabet++;
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_4
    *
   **
  ***
*/ 
    for(int row=1;row<=n;row++) 
    {
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
    1
   22
  333
*/
    for(int row=1;row<=n;row++)
    {
        //For space printing
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //For row printing
        for(int col=1;col<=row;col++)
        {
            cout<<row;
        }
        cout<<endl;
    }
    cout<<endl;
/* Pattern_6
    1
   00
  111
*/
    for(int row=1;row<=n;row++)
    {
        //For space printing
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
    A
   BB
  CCC
*/
    char ch = 'A'; //শুধুমাত্র ১ম লাইনে A দরকার, তাই লুপের বাইরে করা declare হয়েছে
    for(int row=1;row<=n;row++)
    {
        
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;  // ch = A+1 = B
    }
    cout<<endl;
/* Pattern_7
    $
   $$
  $$$
*/
    for(int row=1;row<=n;row++)
    {
        //space printing 
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"$";
        }
        cout<<endl;
    }
    cout<<endl;


    cout<<"\n"<<endl;
    return 0;
}