#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, i, temp, c = 0, rem, res = 0;
  cout << "Enter a number: ";
  cin >> n;
  temp = n; // storing the original number

  while (temp != 0)
  {
    temp /= 10;
    c++;
  }

  temp = n;

  while (temp != 0)
  {
    rem = temp % 10;
    res += pow(rem, c);
    temp /= 10;
  }

  if (res == n)
    cout << n << " is an Armstrong number" << endl;
  else
    cout << n << " is not an Armstrong number" << endl;

  return 0;
}