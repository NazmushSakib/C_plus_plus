#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n, sum=0;
    cout<<"Enter last fraction value : ";
    cin>>n;

    for(double i=1;i<=n;i++)
    {
        sum = sum + (1/i);

        if(i==1)
        {
            cout<<"1";
        }
        else if(i==n)
        {
            cout<<"1/"<<n<<" = ";
        }
        else
        {
            cout<<" + 1/"<<i<<" + ";
        }
    }
    cout <<sum<<endl;
    return 0;
}