#include <iostream>
using namespace std;

int main()
{
  int n, count = 0, el;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  el = arr[0];
  for (int j = 0; j < n; j++)
  {
    if (count == 0)
    {
      count = 1;
      el = arr[j];
    }
    else if (el == arr[j])
      count++;
    else
      count--;
  }
  int c1 = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == el)
      c1++;
  }
  if (c1 > (n / 2))
  {
    cout << el;
  }
  else
    cout << "None";
  return 0;
}