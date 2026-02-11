#include <iostream>
using namespace std;

int findPeak(int arr[], int n)
{
  int low = 0, high = n - 1;

  while (low < high)
  {
    int mid = low + (high - low) / 2;

    if (arr[mid] < arr[mid + 1])
    {
      low = mid + 1; // move right
    }
    else
    {
      high = mid; // move left
    }
  }

  return low; // or high (both same)
}

int main()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int peakIndex = findPeak(arr, n);

  cout << "Peak element = " << arr[peakIndex]
       << " at index " << peakIndex << endl;

  return 0;
}