//1^2+3^2+5^2+..............+n^2 =?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the last odd number : ";
    cin>>n;
    for(int i=1;i<=n;i+=2)
    {
        sum = sum + i*i;
    }
    cout <<"The value of the series is -> 1^2 + 3^2 + 5^2 +..............+"<<n<<"^2 = "<<sum<<endl;

    return 0;
}