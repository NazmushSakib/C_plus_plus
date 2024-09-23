#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];
  //taking input]
  cout<<"Enter the values of array ->"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<"Enter the value of arr["<<i<<"]= ";
    cin>>arr[i];
    cout<<endl;
  }
  //printing the input
  cout<<"before sorting ->"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  //selection Sort 

  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[i])
      {
        int temp = arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }

    }
  }
  cout<<"After sorting ->"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  cout<<endl;
  return 0;
}
