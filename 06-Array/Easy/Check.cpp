#include <iostream>
using namespace std;

bool check(int a[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      return false;
    }
  }
  return true;
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
  if (check(arr, n))
    cout << "Array is sorted." << endl;
  else
    cout << "Array is not sorted." << endl;
  return 0;
}