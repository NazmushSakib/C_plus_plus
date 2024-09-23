#include <bits/stdc++.h>
using namespace std;

void checkArmStrongNumber(int a)
{
  int num = a;
  int tempNum = num;
  int sumOfDigits=0;
  while(tempNum!=0)
  {
    int digit = tempNum%10;
    sumOfDigits= sumOfDigits + digit * digit * digit;
    tempNum = tempNum/10;
  }
  if(num==sumOfDigits)
  {
    cout<<"This is a Armstrong Number"<<endl;
  }
  else
  {
    cout<<"This is not an Armstrong Numebr."<<endl;
  }
}


int main()
{
  int num, tempNum, armNum =0, revNum=0, sumOfNum=0;

  cout<<"Enter a positive integer Number : ";
  cin>>num;

  checkArmStrongNumber(num);
  cout<<endl;
  return 0;
}
