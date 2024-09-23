#include <bits/stdc++.h>
using namespace std;

int findFibonacci(int a)
{
  int fibo=0;

  return fibo;

}

int main()
{
  int n;
  cout<<"Enter an nth number :  ";
  cin>>n;
  int a[n];
  a[0] = 1;
  a[1] = 1;
  a[2] = 1+1 =2;
  a[3] = 1+2=3;

  for(int i=2;i<n;i++)
  {
    a[i] = a[i-1] + a[i-2];
  }

  //output printing
  for(int i=0;i<n;i++)
  {

  }

  cout<<endl;
  return 0;
}
