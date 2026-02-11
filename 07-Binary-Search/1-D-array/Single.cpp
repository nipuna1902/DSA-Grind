#include <iostream>
using namespace std;

int singleNonDuplicate(int arr[], int n)
{
  int low = 0, high = n - 1;

  while (low < high)
  {
    int mid = low + (high - low) / 2;

    // Make mid even
    if (mid % 2 == 1)
      mid--;

    if (arr[mid] == arr[mid + 1])
    {
      low = mid + 2; // single is on right
    }
    else
    {
      high = mid; // single is on left
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
  cout << "Enter sorted elements (pairs + one single): ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Single element = " << singleNonDuplicate(arr, n);

  return 0;
}