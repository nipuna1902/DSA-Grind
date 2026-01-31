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

  int first = firstOccurrence(arr, n, X);
  if (first == -1)
  {
    cout << "Count = 0";
  }
  else
  {
    int last = lastOccurrence(arr, n, X);
    cout << "Count = " << (last - first + 1);
  }

  return 0;
}