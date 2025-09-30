#include <iostream>
using namespace std;

void count(int i, int a)
{
  if (i <= a)
  {
    cout << i << " ";
    count(i + 1, a);
  }
}

int main()
{
  int n;
  cin >> n;
  count(1, n);
  return 0;
}