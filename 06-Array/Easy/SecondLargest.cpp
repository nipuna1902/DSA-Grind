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

  int largest = arr[0];

  for (int i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  int slargest = -1;
  for (int j = 0; j < n; j++)
  {
    if (arr[j] > slargest && arr[j] != largest)
      slargest = arr[j];
  }
  cout << "The second largest element is " << slargest;
  return 0;
}