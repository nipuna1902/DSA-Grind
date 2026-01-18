#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int X)
{
  int low = 0, high = n - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (arr[mid] == X)
      return mid;

    else if (arr[mid] < X)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main()
{
  int n, X;
  cout << "Enter size of sorted array: ";
  cin >> n;

  int arr[n];
  cout << "Enter sorted elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Enter element to search: ";
  cin >> X;

  int index = binarySearch(arr, n, X);

  if (index != -1)
    cout << "Element found at index " << index << endl;
  else
    cout << "Element not found" << endl;

  return 0;
}