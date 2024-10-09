#include <bits/stdc++.h>
using namespace std;

void push(int value);
int pop();
int peek();
void display();

 const int MAX=4;
 int stak[MAX];
 int top =-1;

int main()
{
  int p;
 // MAX = n-1;
 // int stak[MAX]; evabe hobe na ; globally declare korte hobe

  cout<<"Enter  values to be pushed : \n";
  for(int i=0;i<MAX;i++)
  {
    cin>>p;
    push(p);
  }
    peek();

    cout<<"\n\n\n";
  cout<<"values to be poped : \n";
  for(int i=MAX-1ni;i>=0;i--)
  {
    cout<<"poped "<<stak[i]<<endl;
    pop();
  }
  peek();
  cout<<endl;
  return 0;
}

void push(int value)
{
  if(top>=MAX)
  {
    cout<<"Overflow condition. Can not pushed the value\n";
    return;
  }
  
  stak[++top]=value;
  cout<<value<<" Pushed onto stack.\n";
}

int pop()
{
  if(top<0)
  {
    cout<<"Underflow condition. Can not be poped.\n";
    return -1;
  }
  return 
  stak[top--];
}

int peek()
{
  if(top<0)
  {
    cout<<"Stack is empty.\n";
    return -1;
  }
  cout<<"The top value is : "<<stak[top]<<endl;
  return stak[top];
}
