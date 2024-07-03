#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of row : ";
    cin>>n;

/*
    1
   12
  123
*/
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
            cout<<col;
        }
        cout<<endl;
    }
/*
123
 12
  1
*/
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
            cout<<col;
        }
        cout<<endl;
    }
    cout<<endl;
/*
    1
   22
  333
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
            cout<<row;
        }
        cout<<endl;    
    }
/*
  333
   22
    1
*/    
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
            cout<<row;
        }
        cout<<endl;
    }
    cout<<endl;

/*
    A
   AB
  ABC   
*/
    for(int row=1;row<=n;row++)
    {
        char alphabet ='A';
        //space printing
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //value printing
        for(int col=1;col<=row;col++)
        {
            cout<<alphabet;
            alphabet++;
        }
        cout<<endl;
    }
/*
  ABC
   AB
    A
*/
    for(int row=n-1;row>=1;row--)
    {
        char alpabet='A';
        //space printing
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //value printing
        for(int col=1;col<=row;col++)
        {
            cout<<alpabet;
            alpabet++;
        }
        cout<<endl;
    }
    cout<<endl;

/*
    a
   bb
  ccc
*/  char ch ='a';
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
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }

/*
  ccc
   bb
    a
*/
    char balpha = 'a';
    char alpha = balpha + (n-2); 
    /*n-2; because, alpha = a+(n-1) = a+(3-1) = a+2= c হতো
     কিন্তু এখানে b থেকে শুরু করা দরকার তাই, alpha = a+(n-2) = a+(3-2)=a+1=b 
    */
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
            cout<<alpha;
        }
        
        cout<<endl;
        alpha--;
        
    }
    cout<<endl;
/*
    #
   ##
  ###
*/
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
            cout<<"#";
        }
        cout<<endl;
    }
/*
  ###
   ##
    #
*/
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
            cout<<"#";
        }
        cout<<endl;
    }
    cout<<endl;



    cout<<endl<<endl<<endl;
    return 0;
}