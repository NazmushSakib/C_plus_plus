#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, a[100];

    cout<<"How many fibonacci number : ";
    cin>>n;

    a[0]=0;
    a[1]=1;

    for(int i=2;i<n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    cout<<endl<<endl;

    cout<<"The fibonacci series is -> ";

    for(int i=0;i<n;i++)
    {
        cout << a[i]<<" ";
    }






    cout<<endl<<endl;
    return 0;
}