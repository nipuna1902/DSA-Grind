#include <iostream>
using namespace std;

int main()
{
  int n, s;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Enter the element to be searched: ";
  cin >> s;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == s)
      cout << "Element found at " << i + 1;
  }
  return 0;
}