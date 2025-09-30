#include <iostream>
using namespace std;

int main()
{
  int num, reversed = 0;

  cout << "Enter a number: ";
  cin >> num;

  int temp = num; // store original

  while (num != 0)
  {
    int digit = num % 10;             // get last digit
    reversed = reversed * 10 + digit; // add digit to reversed
    num = num / 10;                   // remove last digit
  }

  cout << "Reversed number of " << temp << " = " << reversed << endl;

  return 0;
}