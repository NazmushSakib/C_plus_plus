#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Array size : ";
    cin>>n;
    int arr[n];
  
    cout<<"Enter random integer values -> "<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<"Enter the value of arr["<<i<<"]= ";
      cin>>arr[i];
      cout<<endl;
    }
  //printing the input.
    cout<<"Elements of arrays before sorting -> "<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(arr[j]<arr[i])
        {
          int temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
        }
      }
    }

    cout<<"elements after sorting -> "<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<< " ";
    }
    cout<<endl<<endl;
    return 0;
}


/*
*i=0 [ 64 256 3 8634 346 78]
j = i+1; [256,3]

arr[j]< arr[i] // 3<64
temp = arr[j] = 3
arr[j]=arr[i]= 64
arr[i]=temp = 3

*/
