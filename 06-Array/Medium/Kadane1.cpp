#include <iostream>
#include <climits>
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

  int maxSum = INT_MIN;
  int currentSum = 0;

  int start = 0, ansStart = 0, ansEnd = 0;

  for (int i = 0; i < n; i++)
  {

    currentSum += arr[i];

    // Update maxSum and store subarray boundaries
    if (currentSum > maxSum)
    {
      maxSum = currentSum;
      ansStart = start;
      ansEnd = i;
    }

    // If currentSum becomes negative, reset it
    if (currentSum < 0)
    {
      currentSum = 0;
      start = i + 1; // next subarray starts from next index
    }
  }

  cout << "Maximum Subarray Sum = " << maxSum << endl;
  cout << "Subarray: ";
  for (int i = ansStart; i <= ansEnd; i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}