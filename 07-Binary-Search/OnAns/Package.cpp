#include <iostream>
#include <vector>
using namespace std;

int calculateDays(vector<int> &weights, int capacity)
{
  int days = 1;
  int currentload = 0;
  for (int weight : weights)
  {
    if (currentload + weight > capacity)
    {
      days++;
      currentload = weight;
    }
    else
      currentload += weight;
  }
  return days;
}

int shipWithinDays(vector<int> &weights, int D)
{
  int low = 0;
  int high = 0;
  for (int weight : weights)
  {
    low = max(low, weight);
    high += weight;
  }
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    int days = calculateDays(weights, mid);
    if (days <= D)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return low;
}

int main()
{
  int n, D;

  cout << "Enter number of packages: ";
  cin >> n;
  vector<int> weights(n);
  cout << "Enter the weights: ";
  for (int i = 0; i < n; i++)
    cin >> weights[i];
  cout << "Enter the days: ";
  cin >> D;
  cout << "Minimum capacity : " << shipWithinDays(weights, D) << endl;
  return 0;
}