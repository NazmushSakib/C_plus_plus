// Find min of two number 12,3 ; what is the max.

#include <bits/stdc++.h>
using namespace std;

int min(int arr[]);
int main() {
  int size = 2;
  int arr[size];

  cout << "Enter the array elements : ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
    cout << endl;
  }
  cout << "The min value between two number is : " << min(arr) << endl;

  cout << endl;
  return 0;
}

int min(int arr[]) {
  if (arr[0] < arr[1]) {
    return arr[0];
  } else {
    return arr[1];
  }
}
