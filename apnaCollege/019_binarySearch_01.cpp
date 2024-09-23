#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the array size : ";
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++)
  {
    cout<<"arr["<<i<<"] = ";
    cin>>arr[i];
    cout<<endl;
  }
  int key;
  cout<<"Enter the value you want to search : ";
  cin>>key;

  int start =0;
  int end =n;
  while(start<=end)
  {
    int mid = (start+end)/2;
    if(key == arr[mid])
    {
      cout<<"Found!! The array index is : "<<mid<<endl;
      break;
    }
    else if(key>arr[mid])
    {
      start = mid +1;
    }
    else if(key<arr[mid])
    {
      end = mid -1;
    }
    else
    {
      cout<<"You've enterd wrong value."<<endl;
    }
  }

  cout<<endl;
  return 0;
}
