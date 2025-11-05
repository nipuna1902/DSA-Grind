#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cout << "Enter size of first sorted array: ";
  cin >> n;
  int a[n];
  cout << "Enter elements of first array: ";
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cout << "Enter size of second sorted array: ";
  cin >> m;
  int b[m];
  cout << "Enter elements of second array: ";
  for (int i = 0; i < m; i++)
    cin >> b[i];

  int i = 0, j = 0;

  cout << "Intersection of arrays: ";
  while (i < n && j < m)
  {
    if (a[i] < b[j])
      i++;
    else if (b[j] < a[i])
      j++;
    else
    {
      cout << a[i] << " ";
      i++;
      j++;
    }
  }
  cout << endl;
  return 0;
}