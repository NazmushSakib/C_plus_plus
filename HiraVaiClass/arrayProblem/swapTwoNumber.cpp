#include <bits/stdc++.h>
using namespace std;

void swapNum(int a, int b);

int main()
{
  int a,b,temp;
  cout<<"Enter First number : ";
  cin>>a;
  cout<<"Enter Second number : ";
  cin>>b;
  swapNum(a,b);
  cout<<endl;
  return 0;
}

void swapNum(int a, int b)
{
  int  temp =a;
  a = b;
  b = temp;

  cout<<"After Swapping First Number : "<<a<<endl;
  cout<<"After Swapping Second Number : "<<b<<endl;
}
