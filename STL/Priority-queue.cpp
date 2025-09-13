#include <iostream>
#include <queue>
using namespace std;

int main()
{
  // max heap
  priority_queue<int> pq;

  pq.push(5);     //{5}
  pq.push(2);     //{5,2}
  pq.push(8);     //{8,5,2}
  pq.emplace(10); //{10,8,5,2}

  cout << pq.top(); // prints 10

  pq.pop(); //{8,5,2}

  cout << pq.top(); // prints 8

  // min heap
  priority_queue<int, vector<int>, greater<int>> minpq;
  minpq.push(5);       //{5}
  minpq.push(2);       //{2,5}
  minpq.push(8);       //{2,5,8}
  minpq.emplace(10);   //{2,5,8,10}
  cout << minpq.top(); // prints 2

  // push--> log n
  // pop--> log n
  // top--> O(1)
  // size swap empty functions same as others
  return 0;
}