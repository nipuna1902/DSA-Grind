#include <iostream>
using namespace std;

int main()
{
  int a, b, gcd = 1;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  int limit = (a < b) ? a : b;

  for (int i = 1; i <= limit; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      gcd = i;
    }
  }

  cout << "GCD of " << a << " and " << b << " = " << gcd << endl;

  return 0;
}