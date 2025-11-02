#include <iostream>
using namespace std;

int Rotate(int arr[], int n)
{
  int temp;
  temp = arr[0];
  for (int j = 1; j <= n; j++)
  {
    arr[j - 1] = arr[j];
  }
  arr[n - 1] = temp;
}

int main()
{
  int n;
  cout << "Enter size of sorted array: ";
  cin >> n;

  int arr[n];
  cout << "Enter sorted elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  Rotate(arr, n);

  cout << "Array after rotating: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}