#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, temp, rem, sum =0;
    cout<<"<-----This program will calculate sum of the digits of a number----->"<<endl;
    cout << "Enter a integer number : ";
    cin>>num;
    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    cout <<"The sum of the digits = "<<sum<<endl;
    return 0;
}