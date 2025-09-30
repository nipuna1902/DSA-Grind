// get the minimums and swap
#include <iostream>
using namespace std;

void selection_sort(int a[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int min = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (a[j] < a[min])
        min = j;
    }
    int temp = a[min];
    a[min] = a[i];
    a[i] = temp;
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
  selection_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}