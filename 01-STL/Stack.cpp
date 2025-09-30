#include <iostream>
#include <stack>
using namespace std;

int main()
{
  // LIFO(Last in first out)
  // indexing is not allowed here
  stack<int> st;

  st.push(1);    //{1}
  st.push(2);    //{2,1}
  st.push(3);    //{3,2,1}
  st.push(3);    //{3,3,2,1}
  st.emplace(5); //{5,3,3,2,1}

  cout << st.top(); // prints 5
  // st[2] is invalid
  st.pop();           //{3,3,2,1}
  cout << st.top();   // 3
  cout << st.size();  // 4
  cout << st.empty(); // is the stack empty? -->False

  stack<int> st1, st2;
  st1.swap(st2);

  // push,pop,top all big O of 1 notation
  return 0;
}