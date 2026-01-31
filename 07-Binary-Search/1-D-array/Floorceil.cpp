// Floor of X
// Largest element ≤ X
// Ceil of X
// Smallest element ≥ X
#include <iostream>
using namespace std;

int findFloor(int arr[], int n, int X)
{
  int low = 0, high = n - 1;
  int ans = -1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (arr[mid] <= X)
    {
      ans = arr[mid];
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return ans;
}

int findCeil(int arr[], int n, int X)
{
  int low = 0, high = n - 1;
  int ans = -1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (arr[mid] >= X)
    {
      ans = arr[mid];
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
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter sorted elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter value X: ";
  cin >> X;

  int floorVal = findFloor(arr, n, X);
  int ceilVal = findCeil(arr, n, X);

  if (floorVal != -1)
    cout << "Floor of " << X << " is: " << floorVal << endl;
  else
    cout << "Floor does not exist" << endl;

  if (ceilVal != -1)
    cout << "Ceil of " << X << " is: " << ceilVal << endl;
  else
    cout << "Ceil does not exist" << endl;

  return 0;
}