#include <iostream>
using namespace std;

int main()
{
  pair<int, int> p = {1, 5};
  cout << p.first << " " << p.second;

  pair<int, pair<int, int>> n = {9, {10, 15}};
  cout << p.first << " " << n.second.second << " " << n.second.first;

  pair<int, int> arr[] = {{1, 2}, {9, 6}, {4, 3}};
  cout << arr[1].second;

  return 0;
}