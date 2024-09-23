#include <bits/stdc++.h>
using namespace std;

void valuePass(int num)
{
    num =30;
}
void referencePass(int *num)
{
    *num = 20;
}

int main()
{   
    int x =10;
    cout<<"pass by value."<<endl;
    cout<<"Before calling the function x = "<<x<<endl;
    valuePass(x);  //pass by value:  copy of x
    cout<<"After calling the function x = "<<x<<endl<<endl;

    cout<<"<---------Pass by Reference or Argument------------->"<<endl;

    cout<<"Before calling the function x = "<<x<<endl;

    referencePass(&x);  //pass by Reference:   of x

    cout<<"After calling the function x = "<<x<<endl;

    cout<<endl<<endl<<endl;
    return 0;
}
