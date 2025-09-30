#include <iostream>
using namespace std;

void print(int i, int n)
{
  if (i > n)
  {
    return;
  }
  else
  {
    printf("Nipuna\n");
    print(i + 1, n);
  }
}

int main()
{
  int n;
  cin >> n;
  print(0, n);
}