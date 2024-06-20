#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2,rem, gcd, lcm, n1,n2;
    cout<<"------------This program is to calculate GCD & LCM-----------"<<endl;
    cout<<"Enter two integer number : "<<endl;
    cin>>num1>>num2;

    n1 = num1;
    n2 = num2;

    while(n2!=0)
    {   rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (num1 * num2)/gcd;
    cout << "The value of GCD = "<<gcd<<endl;
    cout << "The value of LCM = "<<lcm<<endl;
    return 0;
}