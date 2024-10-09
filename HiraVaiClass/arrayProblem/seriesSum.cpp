/*
Find sum of all element in one array i.e [1,3,5,5,6,7] is given array, please
now find some of 1+2+3+4+....N
*/

#include <bits/stdc++.h>
using namespace std;

int sumSeries(int arr[], int n);
int oddSum(int arr[], int n);
int evenSum(int arr[], int n);

int main() {
  int a, b, c;
  cout << "Enter the size of array : ";
  cin >> a;
  int num[a];

  for (int i = 0; i < a; i++) {
    num[i] = i + 1;
  }
  /*
    //printing series
    for(int i=0;i<a;i++)
    {
      cout<<num[i]<<endl;
    }
  */
  // cout<<"\na[99] = "<<num[99]<<endl;
  cout << "Sum of series : " << sumSeries(num, a) << endl;
  cout << "Sum of odd numbers : " << oddSum(num, a) << endl;
  cout << "Sum of even numbers : " << evenSum(num, a) << endl;

  cout << endl;
  return 0;
}

int sumSeries(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
  return sum;
}

int oddSum(int arr[], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      sum = sum + arr[i];
    }
  }
  return sum;
}

int evenSum(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      sum = sum + arr[i];
    }
  }
  return sum;
}
