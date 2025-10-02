// divide and conquer(merge)
#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r)
{
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];
  for (int i = 0; i < n1; i++)
    L[i] = a[l + i];
  for (int i = 0; i < n2; i++)
    R[i] = a[m + 1 + i];

  int i = 0, j = 0, k = l;
  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
      a[k++] = L[i++];
    else
      a[k++] = R[j++];
  }
  while (i < n1)
    a[k++] = L[i++];
  while (j < n2)
    a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r)
{
  if (l >= r)
    return;
  int m = (l + r) / 2;
  mergeSort(a, l, m);
  mergeSort(a, m + 1, r);
  merge(a, l, m, r);
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

  mergeSort(arr, 0, n - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}

// 🔹 Example Walkthrough
// Array = [5, 3, 8, 4, 2]
// Step 1: Divide
// Split into halves → [5, 3, 8] and [4, 2]
// Step 2: Recursively sort each half
// Left part [5, 3, 8] → split → [5, 3] and [8]
// [5, 3] → split → [5] and [3]
// Merge [5] and [3] → [3, 5]
// Now [3, 5, 8]
// Right part [4, 2] → split → [4] and [2]
// Merge [4] and [2] → [2, 4]
// Step 3: Merge both halves
// Merge [3, 5, 8] and [2, 4]
// Compare step by step:
// 2 < 3 → [2]
// 3 < 4 → [2, 3]
// 4 < 5 → [2, 3, 4]
// Append leftovers [5, 8] → [2, 3, 4, 5, 8]
// ✅ Final Sorted Array = [2, 3, 4, 5, 8]