#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];
  cout<<"Enter the value of array -> \n";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    cout<<endl;
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<endl;
//insertion sort
  for(int i=1;i<n;i++)
  {
    int temp =arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>temp)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
  }
  cout<<endl<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
