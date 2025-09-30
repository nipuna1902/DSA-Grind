#include <iostream>
using namespace std;

// It states gcd(n1,n2) = gcd(n1-n2,n2) where n1>n2
// ex: gcd(20,15) = gcd(5,15)
// keep doing till the greater number becomes 0

int gcd(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  cout << "GCD = " << gcd(a, b) << endl;
  return 0;
}
