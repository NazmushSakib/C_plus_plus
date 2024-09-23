#include <bits/stdc++.h>
#define N 5
int stack[N];
int top =-1;

using namespace std;



void push()
{
  int x;
  cout<<"Enter data : ";
  cin>>x;
  
  if(top == N-1)
  {
    cout<<"Overflow."<<endl;
  }
  else
  {
    top++;
    stack[top] = x;
  }
}

void pop()
{
  int item;
  if(top == -1)
  {
    cout<<"Underflow"<<endl;
  }
  else
  {
    item = stack[top];
    top--;
    cout<<item<<endl;
  }
}

void peek()
{
  if(top == -1)
  {
    cout<<"There is no value in the stack."<<endl;
  }
  else
  {
    cout<<"The value is : "<<stack[top]<<endl;
  }
}

void display()
{
  for(int i=top;i>=0;top--)
  {
    cout<<"The values of the stack are ->"<<endl;
    cout<<stack[i]<<endl;
  }
}

int main()
{
  int ch;
  
  do
  {
    cout<<"Enter choice : 1: push  2: pop  3: peek  4: display \n > ";
    cin>>ch;
    switch(ch)
  {
      case 1: 
      {
        push();
        break;
      }
      case 2:
      {
          pop();
          break;
      }
      case 3:
      {
          peek();
          break;
      }
      case 4:
      {
          display();
          break;
      }
      default:
      {
          cout<<"Invalid choice.\n";
      }
    }
  }
  while(ch!=0);
  

  cout << endl;
  return 0;
}
