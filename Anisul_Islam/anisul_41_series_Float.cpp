#include <bits/stdc++.h>
using namespace std;

int main()
{
    double num1, num2, sum=1.5;
    cout << "1.5+2.5+3.5+ ........+n = ?\n";
    cout << "Enter the value of n : ";
    cin >> num2;

    for(double i=1;i<=num2; i++)
    {
        sum = sum + i;
    }
    cout << "1.5+2.5+3.5+ ........+"<<num2<<" = "<<sum<<endl<<endl;

    return 0;
}