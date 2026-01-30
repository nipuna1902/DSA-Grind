// where X starts
#include <iostream>
using namespace std;

int lowerbound(int arr[], int n, int x)
{
  int low = 0, high = n - 1;
  int ans = n;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (arr[mid] >= x)
    {
      ans = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return ans;
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

  cout << "Enter element to be inserted: ";
  cin >> X;

  int index = lowerbound(arr, n, X);
  cout << X << " should be at index " << index;
}