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

// Example Walkthrough

// Array: {29, 10, 14, 37, 13}

// i=0 → find min in [29,10,14,37,13] → 10 → swap with 29
// → {10, 29, 14, 37, 13}

// i=1 → find min in [29,14,37,13] → 13 → swap with 29
// → {10, 13, 14, 37, 29}

// i=2 → find min in [14,37,29] → 14 → already in place
// → {10, 13, 14, 37, 29}

// i=3 → find min in [37,29] → 29 → swap with 37
// → {10, 13, 14, 29, 37}