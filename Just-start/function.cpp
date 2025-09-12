#include <iostream>
using namespace std;

int fibo(int a)
{
  int fact, x = 0, y = 1;
  for (int i = 1; i <= a; i++)
  {
    cout << x << " ";
    fact = x + y;
    x = y;
    y = fact;
  }
  cout << endl;
}

int main()
{
  int n;
  cout << "Enter n and r\n ";
  cin >> n;
  cout << "Fibonacci" << fibo(n);
  return 0;
}