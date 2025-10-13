// pick a pivot and place it in its correct place in the sorted array
// smaller in left greater in right
// to place pivot in its place take 2 pointers n keep swapping till j crosses i or vice versa
#include <iostream>
using namespace std;

int partition(int a[], int low, int high)
{
  int pivot = a[high];
  int i = low - 1;

  for (int j = low; j < high; j++)
  {
    if (a[j] < pivot)
    {
      i++;
      swap(a[i], a[j]);
    }
  }
  swap(a[i + 1], a[high]);
  return (i + 1);
}

void quickSort(int a[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(a, low, high);

    quickSort(a, low, pi - 1);
    quickSort(a, pi + 1, high);
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
    cin >> arr[i];

  quickSort(arr, 0, n - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}