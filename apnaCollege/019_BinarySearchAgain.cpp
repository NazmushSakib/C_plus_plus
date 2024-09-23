#include<bits/stdc++.h>
using namespace std;

void binarySearch(int arr[],int n, int key);
int main()
{
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array ->"<<endl;
//array input
  for(int i=0;i<n;i++)
  {
    cout<<"Enter the value a["<<i<<"] = ";
    cin>>arr[i];
    cout<<endl;
  }
  int key;
  cout<<"Enter the value you want to search : ";
  cin>>key;
  binarySearch(arr,n,key);
  cout<<endl;
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
    if(arr[mid]==key)
    {
      cout<<"Found!!The element index is : "<<mid<<endl;
      position++;
      break;
    }
    else if(arr[mid]<key)
    {
      start = mid + 1;
    }
    else if(arr[mid]>key)
    {
      end = mid - 1;
    }
  }
  if(position==-1)
  {
    cout<<"Not Found!!You've entered wrong value."<<endl;
  }
}
