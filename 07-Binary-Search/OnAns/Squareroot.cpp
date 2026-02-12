#include <iostream>
using namespace std;

int sqrt(int n)
{
  int low = 1, high = n, mid, ans;
  while (high >= low)
  {
    mid = (high + low) / 2;
    if ((mid * mid) <= n)
    {
      ans = mid;
      low = mid + 1;
    }
    else
      high = mid - 1;
  }
  return high;
}

int main()
{
  int n, ans;
  cout << "Enter n : ";
  cin >> n;
  ans = sqrt(n);
  cout << "The answer is " << ans;
}