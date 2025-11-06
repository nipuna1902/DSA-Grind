#include <iostream>
using namespace std;

int main()
{
  int n, s = 0, a = 0;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements: ";
  for (int i = 1; i <= n - 1; i++)
  {
    cin >> arr[i];
    s += arr[i];
  }
  a = (n * (n + 1)) / 2;
  cout << "The missing element is " << a - s;
  return 0;
}