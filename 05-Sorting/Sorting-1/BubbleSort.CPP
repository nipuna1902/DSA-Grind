// push the maximum to the last by adjacent swaps
#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 0; j <= i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        int temp = a[j + 1];
        a[j + 1] = a[j];
        a[j] = temp;
      }
    }
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

// Example: Array = [5, 3, 8, 4, 2]
// 👉 Pass 1 (i = 0)
// Compare 5 and 3 → swap → [3, 5, 8, 4, 2]
// Compare 5 and 8 → no swap → [3, 5, 8, 4, 2]
// Compare 8 and 4 → swap → [3, 5, 4, 8, 2]
// Compare 8 and 2 → swap → [3, 5, 4, 2, 8]
// 👉 Largest (8) is in its place.
// 👉 Pass 2 (i = 1)
// Compare 3 and 5 → no swap → [3, 5, 4, 2, 8]
// Compare 5 and 4 → swap → [3, 4, 5, 2, 8]
// Compare 5 and 2 → swap → [3, 4, 2, 5, 8]
// 👉 Second largest (5) is in its place.
// 👉 Pass 3 (i = 2)
// Compare 3 and 4 → no swap → [3, 4, 2, 5, 8]
// Compare 4 and 2 → swap → [3, 2, 4, 5, 8]
// 👉 Third largest (4) is in its place.
// 👉 Pass 4 (i = 3)
// Compare 3 and 2 → swap → [2, 3, 4, 5, 8]
// Now the array is fully sorted 🎉