#include <iostream>
using namespace std;

long long power(long long base, int n, long long limit)
{
  long long result = 1;

  for (int i = 0; i < n; i++)
  {
    result *= base;

    if (result > limit)
      return result;
  }

  return result;
}

int root(int n, int m)
{
  int low = 1, high = n;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    long long val = power(mid, m, n);

    if (val == n)
      return mid;
    else if (val < n)
      low = mid + 1;
    else
      high = mid - 1;
  }

  return -1;
}

int main()
{
  int n, m, ans;
  cout << "Enter n : ";
  cin >> n;
  cout << "Enter m : ";
  cin >> m;
  ans = root(n, m);
  if (ans == -1)
    cout << "No integer nth root exists.";
  else
    cout << "Nth root = " << ans;

  return 0;
}