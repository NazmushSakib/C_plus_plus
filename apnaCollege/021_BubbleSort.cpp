#include<bits/stdc++.h>
using namespace std;

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

 //printing before sorting
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  //Bubble Sorting Logic
  int counter =1;
  while(counter<n)
  {
    for(int i=0;i<n-counter;i++)
    {
      if(arr[i]>arr[i+1])
      {
        int temp =arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
    }
    counter++;
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  cout<<endl;
  return 0;
}
