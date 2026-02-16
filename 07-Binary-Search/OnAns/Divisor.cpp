#include <iostream>
#include <vector>
using namespace std;

int calculateSum(vector<int> &nums, int mid)
{
  long long s = 0;
  for (int n : nums)
  {
    s += (n + mid - 1) / mid;
  }
  return s;
}

int smallestDivisor(vector<int> &nums, int threshold)
{
  int low = 1;
  int high = 0;

  for (int num : nums)
    high = max(high, num);
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    long long sum = calculateSum(nums, mid);
    if (sum <= threshold)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return low;
}

int main()
{
  int n, threshold;
  cout << "Enter the size of array : ";
  cin >> n;
  vector<int> nums(n);

  cout << "Enter the elements : ";
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }
  cout << "Enter threshold: ";
  cin >> threshold;
  cout << "Smallest divisor: " << smallestDivisor(nums, threshold) << endl;
  return 0;
}