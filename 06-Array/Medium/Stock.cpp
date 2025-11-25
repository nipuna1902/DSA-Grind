#include <iostream>
#include <climits>
using namespace std;

int maxProfit(int prices[], int n)
{
  int minPrice = INT_MIN;
  minPrice = INT_MAX; // smallest price so far
  int maxProfit = 0;  // best profit so far

  for (int i = 0; i < n; i++)
  {
    if (prices[i] < minPrice)
    {
      minPrice = prices[i];
    }

    int profit = prices[i] - minPrice;

    if (profit > maxProfit)
    {
      maxProfit = profit;
    }
  }

  return maxProfit;
}

int main()
{
  int n;
  cout << "Enter number of days: ";
  cin >> n;

  int prices[n];
  cout << "Enter prices: ";
  for (int i = 0; i < n; i++)
    cin >> prices[i];

  cout << "Maximum Profit = " << maxProfit(prices, n) << endl;
  return 0;
}