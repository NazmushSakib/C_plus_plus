#include <bits/stdc++.h>
using namespace std;

void selectionSort();
int arrayInput(int n, int arr[]);
int  main()

{
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];

  cout<<"Enter the elements of the array ->"<<endl;
  for(int i=0;i<n;i++)
  {

    cout<<"The value of arr["<<i<<"] = ";
    cin>>arr[i];
    cout<<endl;
  }
  //array print
  cout<<"before sorting -> "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<< " ";
  }
  cout<<endl;
  //Selection Sorting Logic
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])  //arr[i] will be the sorted array & arr[j] for comparison
      {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  cout<<"after sorting-->"<<endl;
  for(int i=0; i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  cout<<endl;
  return 0;
}


