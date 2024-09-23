#include <bits/stdc++.h>
using namespace std;

void binarySearch(int arr[],int n, int key);

int main()
{
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];

  //taking input 
  cout<<"Enter the values of array ->"<<endl;
  for(int i =0; i<n;i++)
  {
    cout<<"Value of arr["<<i<<"] = ";
    cin>>arr[i];
    cout<<endl;
  }
  int key;
  cout<<"Enter the value of the element you want to search in array : ";
  cin>>key;
  
  binarySearch(arr,n,key);

  cout <<endl;
  return 0;
}


void binarySearch(int arr[],int n, int key)
{
  int start = 0;
  int end = n;
  int position = -1;

  while(start<=end)
  {
    int mid = (start+end)/2;
    if(key==arr[mid])
    {
      cout<<"The index of the value is : "<<mid<<endl;
      position++;
      break;
    }
    else
    {
      if(key>arr[mid])
      {
        start = mid+1;
      }
      else if(key<arr[mid])
      {
        end = mid - 1;
      }

    }
  }
  if(position==-1)
  {
    cout<<"Not Found.You've entered wrong value. "<<endl;
  }
}
