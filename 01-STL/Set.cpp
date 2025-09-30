#include <iostream>
#include <set>
using namespace std;

int main()
{
  // sorted and unique elements
  set<int> st;
  st.insert(1);  //{1}
  st.emplace(2); //{1,2}
  st.insert(2);  //{1,2}
  st.insert(5);  //{1,2,5}
  st.insert(4);  //{1,2,4,5}

  // multiset will store sorted not unique elements
  // if you erase one it will erase all the occurences

  // unordered set will store unique elements but not in sorted way
  return 0;
}