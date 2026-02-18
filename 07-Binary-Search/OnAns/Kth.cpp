#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
  int low = 0;
  int high = arr.size() - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    int missing = arr[mid] - (mid + 1);
    if (missing < k)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return low + k;
}

int main()
{
  int n, k;

  cout << "Enter size of array: ";
  cin >> n;

  vector<int> arr(n);

  cout << "Enter sorted elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Enter k: ";
  cin >> k;

  cout << "Kth Missing Number = "
       << findKthPositive(arr, k) << endl;

  return 0;
}