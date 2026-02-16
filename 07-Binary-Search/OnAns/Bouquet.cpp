#include <iostream>
#include <vector>
using namespace std;

bool canMake(vector<int> &bloomDay, int m, int k, int day)
{
  int bouquet = 0;
  int count = 0;

  for (int bloom : bloomDay)
  {
    if (bloom <= day)
    {
      count++;
      if (count == k)
      {
        bouquet++;
        count = 0;
      }
    }
    else
    {
      count = 0;
    }
  }

  return bouquet >= m;
}

int minDays(vector<int> &bloomDay, int m, int k)
{
  int n = bloomDay.size();
  if ((long long)m * k > n)
    return -1;

  int low = bloomDay[0], high = bloomDay[0];
  for (int bloom : bloomDay)
  {
    low = min(low, bloom);
    high = max(high, bloom);
  }
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (canMake(bloomDay, m, k, mid))
      high = mid - 1;
    else
      low = mid + 1;
  }
  return low;
}

int main()
{
  int n, m, k;
  cout << "Enter number of flowers: ";
  cin >> n;
  vector<int> bloomDay(n);
  cout << "Enter bloom days: ";
  for (int i = 0; i < n; i++)
  {
    cin >> bloomDay[i];
  }
  cout << "Enter m (bouquets): ";
  cin >> m;
  cout << "Enter k (flowers per bouquets): ";
  cin >> k;
  cout << "Minimum days: " << minDays(bloomDay, m, k) << endl;
  return 0;
}