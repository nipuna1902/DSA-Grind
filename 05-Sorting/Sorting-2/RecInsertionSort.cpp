#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
  if (n <= 1)
    return;
  insertion_sort(a, n - 1);

  int last = a[n - 1];
  int j = n - 2;

  while (j >= 0 && a[j] > last)
  {
    a[j + 1] = a[j];
    j--;
  }

  a[j + 1] = last;
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
  insertion_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}