#include <iostream>
using namespace std;

int sumOfN(int n)
{
  if (n == 0)
    return 0;
  return n + sumOfN(n - 1);
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  cout << "Sum of first " << n << " numbers = " << sumOfN(n) << endl;
  return 0;
}