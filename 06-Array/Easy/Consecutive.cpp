#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n, m = 0, c = 0;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int j = 0; j < n; j++)
  {
    if (arr[j] == 1)
    {
      c++;
      m = max(m, c);
    }
    else
      c = 0;
  }
  cout << "Maximum consecutive: " << m;
  return 0;
}