#include <iostream>
using namespace std;

int main()
{
  int num, count = 0;

  cout << "Enter a number: ";
  cin >> num;

  int temp = num; // store the number for display

  if (num == 0)
  {
    count = 1; // special case for 0
  }
  else
  {
    while (num != 0)
    {
      num = num / 10; // remove last digit
      count++;
    }
  }

  cout << "Number of digits in " << temp << " = " << count << endl;

  return 0;
}