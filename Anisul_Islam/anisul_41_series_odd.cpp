//1+3+5+..............+n=?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the last odd number : ";
    cin>>n;
    for(int i=1;i<=n;i+=2)
    {
        sum = sum + i;
    }
    cout <<"The value of the series is -> 1+3+5+..............+"<<n<<" = "<<sum<<endl;

    return 0;
}