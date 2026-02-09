#include <iostream>
using namespace std;

int searchRotated(int arr[], int n, int X)
{
  int low = 0, high = n - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    // Found
    if (arr[mid] == X)
      return mid;

    // Left half is sorted
    if (arr[low] <= arr[mid])
    {
      if (arr[low] <= X && X < arr[mid])
        high = mid - 1;
      else
        low = mid + 1;
    }
    // Right half is sorted
    else
    {
      if (arr[mid] < X && X <= arr[high])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return -1; // not found
}

int main()
{
  int n, X;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements (rotated sorted): ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Enter X to search: ";
  cin >> X;

  int index = searchRotated(arr, n, X);

  if (index != -1)
    cout << "Element found at index " << index;
  else
    cout << "Element not found";

  return 0;
}