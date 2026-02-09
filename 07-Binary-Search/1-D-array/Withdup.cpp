#include <iostream>
using namespace std;

bool searchRotatedWithDuplicates(int arr[], int n, int X)
{
  int low = 0, high = n - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (arr[mid] == X)
      return true;

    // Handle duplicates
    if (arr[low] == arr[mid] && arr[mid] == arr[high])
    {
      low++;
      high--;
    }
    // Left half sorted
    else if (arr[low] <= arr[mid])
    {
      if (arr[low] <= X && X < arr[mid])
        high = mid - 1;
      else
        low = mid + 1;
    }
    // Right half sorted
    else
    {
      if (arr[mid] < X && X <= arr[high])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return false;
}

int main()
{
  int n, X;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements (rotated, may have duplicates): ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Enter X to search: ";
  cin >> X;

  if (searchRotatedWithDuplicates(arr, n, X))
    cout << "Element found";
  else
    cout << "Element not found";

  return 0;
}