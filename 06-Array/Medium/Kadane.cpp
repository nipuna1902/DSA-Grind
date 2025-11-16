#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{
  int currentSum = 0;
  int maxSum = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    currentSum += arr[i];
    if (currentSum > maxSum)
      maxSum = currentSum;
    if (currentSum < 0)
      currentSum = 0;
  }

  return maxSum;
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

  cout << "Maximum Subarray Sum = " << kadane(arr, n) << endl;

  return 0;
}