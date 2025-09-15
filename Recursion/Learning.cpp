#include <iostream>
using namespace std;

void printNTimes(int n)
{
  if (n == 0)
    return;

  cout << "Trying Recursion!" << endl;

  printNTimes(n - 1);
}

int main()
{
  int n;
  cout << "Enter how many times to print: ";
  cin >> n;

  printNTimes(n);

  return 0;
}