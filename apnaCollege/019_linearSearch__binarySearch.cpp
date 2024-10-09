#include <bits/stdc++.h>
using namespace std;
void linearSearch(int n, int arr[], int key);
int binarySearch(int n, int arr[], int key);
int main() {
  // Linear search
  int n;
  cout << "Enter the size of array : ";
  cin >> n;
  int arr[n];
  cout << "Enter the array elements : ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int key;
  cout << "The array element you want to search : ";
  cin >> key;

  linearSearch(n, arr, key);
  cout << binarySearch(n, arr, key) << endl;

  cout << endl;
  return 0;
}

// linear Search Function

void linearSearch(int n, int arr[], int key) {
  int positon = -1;
  for (int i = 0; i < n; i++) {
    if (key == arr[i]) {
      cout << "element index = " << i << endl;
      positon++;
      break;
    }
  }
  if (positon == -1) {
    cout << "You've entered wrong value." << endl;
  }
}

// Binary Search

int binarySearch(int n, int arr[], int key) {
  int start = 0;
  int end = n;

  while (start <= end) {
    int mid = (start + end) / 2;
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] > key) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return -1;
}
