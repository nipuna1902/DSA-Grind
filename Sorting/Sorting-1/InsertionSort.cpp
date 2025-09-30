// takes an element and places in its correct position
#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
  for (int i = 0; i <= n - 1; i++)
  {
    int j = i;
    while (j > 0 && a[j - 1] > a[j])
    {
      int temp = a[j - 1];
      a[j - 1] = a[j];
      a[j] = temp;
      j--;
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
  insertion_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
// Example Walkthrough (Array = [5, 3, 8, 4])
// i = 0: nothing happens (first element alone is sorted).
// i = 1: j = 1, compare a[0]=5 and a[1]=3 → swap → [3, 5, 8, 4].
// i = 2: a[2]=8, already in correct place → [3, 5, 8, 4].
// i = 3: a[3]=4
// compare with 8 → swap → [3, 5, 4, 8]
// compare with 5 → swap → [3, 4, 5, 8]
// compare with 3 → stop.
// ✅ Final → [3, 4, 5, 8]