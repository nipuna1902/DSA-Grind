// push the maximum to the last by adjacent swaps
#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
  if (n == 1)
    return;

  for (int j = 0; j <= n - 2; j++)
  {
    if (a[j] > a[j + 1])
    {
      int temp = a[j];
      a[j] = a[j + 1];
      a[j + 1] = temp;
    }
    bubble_sort(a, n - 1);
  }
}

int main()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  bubble_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}