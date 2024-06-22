//2+4+6+8+..............+n=?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the last even number : ";
    cin>>n;
    for(int i=2;i<=n;i+=2)
    {
        sum = sum + i;
    }
    cout <<"The value of the series is -> 2+4+6+8+..............+"<<n<<" = "<<sum<<endl;

    return 0;
}