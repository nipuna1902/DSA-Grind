#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  cout << "Divisors of " << n << " are: ";
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      cout << i << " "; // first divisor
      if (i != n / i)
      {
        cout << n / i << " "; // paired divisor
      }
    }
  }
  cout << endl;

  return 0;
}