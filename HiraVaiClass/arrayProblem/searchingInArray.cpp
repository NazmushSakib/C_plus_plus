#include <bits/stdc++.h>
using namespace std;

void searchValue(int arr[],int n, int key);

int main()
{
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];

  cout<<"Enter the elements of the array -> "<<endl;
  for(int i=0; i<n;i++)
  {
    cout<<"The value of arr["<<i<<"]= ";
    cin>>arr[i];
    cout<<endl;
  }
  int key;
  cout<<"Enter the value you want to search : ";
  cin>>key;

  searchValue(arr,n,key);

  cout<<endl;
  return 0;
}

void searchValue(int arr[],int n, int key)
{
  int x, position=-1;
  for(int i=0;i<n;i++)
  {
    if(key == arr[i])
    {
      cout<<"The index of the value is : "<<i<<endl;
      position++;
      break;
    }
  }
  if(position == -1)
  {
    cout<<"You've entered wrong value."<<endl;
  }
}
