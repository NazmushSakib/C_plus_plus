#include <bits/stdc++.h>
using namespace std;

int fact (int n)
{    //base case:  যে শর্ত সাপেক্ষে ফাংশন কল বন্ধ হবে।

    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}

int main()
{
    int n, factorial;
    cout<<"Enter a number : ";
    cin>>n;

    factorial = fact(n);

    cout<<"The factorial value of "<<n<<"! = "<<factorial<<endl;

    

    cout<<endl<<endl<<endl;
    return 0;
}