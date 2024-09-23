#include <bits/stdc++.h>
using namespace std;

void linearSearch(int n,int arr[],int value)
{
  
  int position = -1;
  for(int i=0;i<n;i++)
  {
    
    if(value == arr[i])
    {
      cout<<"The index position is "<<i<<endl; 
      position++;
      break;
    }
  }  
  if(position == -1)
    {
      cout<<"Wrong Entry."<<endl;
    } 
}

int main()
{
  int n, value;

  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];

  cout<<"Enter the values of Arrays : \n";

  for(int i = 0; i<n; i++)
  {
    cout<<"Values of a["<<i<<"] = ";
    cin>>arr[i];
    cout<<endl;
  }

  cout<<"Enter the value you want to search : ";
  cin>>value;
  
  linearSearch(n,arr,value);

  cout<<endl;
  return 0;
  
}
