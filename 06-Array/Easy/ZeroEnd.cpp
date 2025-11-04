#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int temp[n];
  int i = 0;

  for (int j = 0; j < n; j++)
  {
    if (arr[j] != 0)
    {
      temp[i] = arr[j];
      i++;
    }
  }

  for (int j = 0; j < i; j++)
  {
    arr[j] = temp[j];
  }

  for (int j = i; j < n; j++)
  {
    arr[j] = 0;
  }

  cout << "Array after moving zeros to end: ";
  for (int k = 0; k < n; k++)
    cout << arr[k] << " ";

  cout << endl;
  return 0;
}