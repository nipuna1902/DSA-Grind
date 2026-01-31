#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int X)
{
  int low = 0, high = n - 1, ans = -1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == X)
    {
      ans = mid;
      high = mid - 1;
    }
    else if (arr[mid] < X)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return ans;
}

int lastOccurrence(int arr[], int n, int X)
{
  int low = 0, high = n - 1, ans = -1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == X)
    {
      ans = mid;
      low = mid + 1;
    }
    else if (arr[mid] < X)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return ans;
}

int main()
{
  int n, X;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter sorted elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Enter X: ";
  cin >> X;

  cout << "First occurrence: " << firstOccurrence(arr, n, X) << endl;
  cout << "Last occurrence: " << lastOccurrence(arr, n, X) << endl;

  return 0;
}