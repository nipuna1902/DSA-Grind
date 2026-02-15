#include <iostream>
#include <math.h>
using namespace std;

int count(int arr[], int hourly, int n)
{
  int total = 0;
  for (int i = 0; i < n; i++)
  {
    total += (arr[i] + hourly - 1) / hourly;
  }
  return total;
}

int Bananas(int n, int arr[], int t)
{
  int low = 1, high = 0, mid, totalhr;
  for (int i = 0; i < n; i++)
    high = max(high, arr[i]);
  while (low <= high)
  {
    mid = (low + high) / 2;
    totalhr = count(arr, mid, n);
    if (totalhr <= t)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return low;
}

int main()
{
  int n, time;
  cout << "Enter size of array: ";
  cin >> n;
  cout << "Enter time: ";
  cin >> time;
  int arr[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Minimum speed = " << Bananas(n, arr, time);
  return 0;
}