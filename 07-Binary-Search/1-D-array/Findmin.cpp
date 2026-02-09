#include <iostream>
using namespace std;

int findMin(int arr[], int n)
{
  int low = 0, high = n - 1;

  while (low < high)
  {
    int mid = low + (high - low) / 2;

    if (arr[mid] < arr[high])
    {
      // Minimum is in left part including mid
      high = mid;
    }
    else if (arr[mid] > arr[high])
    {
      // Minimum is in right part
      low = mid + 1;
    }
    else
    {
      // arr[mid] == arr[high], duplicates → shrink
      high--;
    }
  }
  return arr[low];
}

int main()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements (rotated sorted, may have duplicates): ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Minimum element = " << findMin(arr, n) << endl;

  return 0;
}