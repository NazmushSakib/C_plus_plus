//Find maximum number from array [12,34,5,0]
//

#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n);
int findMin(int arr[], int n);

int main()
{
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array ->"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<"Enter the value of arr["<<i<<"]= ";
    cin>>arr[i];
    cout<<endl;
  }
  cout<<"The maximum number from the array is : "<<findMax(arr,n)<<endl;
  cout<<"The minimum number from the array is : "<<findMin(arr,n)<<endl;
  cout<<endl;
  return 0;
}

int findMax(int arr[], int n)
{
  int max=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  return max;
}

int findMin(int arr[], int n)
{
  int min=arr[0];
  for(int i=0;i<n;i++)
  {
    if(arr[i]<min)
    {
      min = arr[i];
    }
  }
  return min;
}
