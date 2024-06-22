//1*2 + 2*3+ 3*4 + 4*5+..............+ n1 *n2=?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2, sum=0;
    cout<<"Enter the last pair of number : ";
    cin>>n1>>n2;
    int i=1,j=2;
    while(i<=n1 && j<=n2)
    {
        sum = sum + i*j;
        i++;
        j++;
    }
    cout <<"The value of the series is -> 1*2 + 2*3 + 3*4 + 4*5 +..............+ "<<n1<<"*"<<n2<<" = "<<sum<<endl;

    return 0;
}