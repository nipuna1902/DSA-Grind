// #include <iostream>
// using namespace std;

// int main()
// {
//   int n, i, a = 1;
//   char ch = 'A';
//   cout << "Enter n\n";
//   cin >> n;
//   for (i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       cout << "  ";
//     }
//     cout << "* ";
//     if (i != 0)
//     {
//       for (int j = 0; j < 2 * i - 1; j++)
//       {
//         cout << "  ";
//       }
//       cout << "* ";
//     }
//     cout << endl;
//   }
//   for (int a = 0; a < n - 1; a++)
//   {
//     for (int j = 0; j < a + 1; j++)
//     {
//       cout << "  ";
//     }
//     cout << "* ";
//     if (a != n - 2)
//     {
//       for (int j = 0; j < 2 * (n - a) - 5; j++)
//       {
//         cout << "  ";
//       }
//       cout << "* ";
//     }
//     cout << endl;
//   }
//   return 0;
// }
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter n\n";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    for (int k = i; k <= n - 1; k++)
    {
      cout << "  ";
    }
    for (int k = n - 1; k >= i; k--)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      cout << "* ";
    }
    for (int k = 1; k <= i - 1; k++)
    {
      cout << "  ";
    }
    for (int k = 1; k <= i - 1; k++)
    {
      cout << "  ";
    }
    for (int j = i; j <= n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}