#include <iostream>
using namespace std;

void Rotate(int arr[], int n, int d)
{
  if (n == 0)
    return;
  d = d % n;
  if (d > n)
    return;
  int temp[d];
  for (int i = 0; i < d; i++)
  {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n - d; i++)
  {
    arr[i] = arr[i + d];
  }
  for (int i = n - d; i < n; i++)
  {
    arr[i] = temp[i - n + d];
  }
}

int main()
{
  int n, d;
  cout << "Enter size of sorted array: ";
  cin >> n;

  int arr[n];
  cout << "Enter sorted elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter D: ";
  cin >> d;
  d = d % n;

  Rotate(arr, n, d);

  cout << "Array after rotating: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}