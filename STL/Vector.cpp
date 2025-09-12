#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;

  v.push_back(9);
  v.emplace_back(15);

  vector<pair<int, int>> vec;

  vec.push_back({1, 4});
  vec.emplace_back(1, 8);

  // vector<int> ve(5, 100);
  // vector<int> ve(5);

  vector<int> v1(5, 78);
  vector<int> v2(v1);

  // how to print a number of the vector using iterator
  vector<int>::iterator t = v.begin();
  t++;
  cout << *(t) << " ";

  t = t + 2;
  cout << *(t) << " ";

  // using for loop
  for (vector<int>::iterator t = v.begin(); t != v.end(); t++)
  {
    cout << *(t) << " ";
  }

  // shortcut
  for (auto t = v.begin(); t != v.end(); t++)
  {
    cout << *(t) << " ";
  }

  // end() indicates the position right next to the last integer stored
  vector<int>::iterator t = v.end();
  // returns a reference to the last element of the vector
  cout << v.back() << " ";

  // deleting a vector
  v.erase(v.begin() + 1);                // deletes one element
  v.erase(v.begin() + 2, v.begin() + 4); // must give the address of element right after the element u wanna delete
  // ex:{10,20,12,23,35}-->{10,20,35}[start,end)

  // insertion
  vector<int> v(2, 100);          //{100,100}
  v.insert(v.begin(), 300);       //{300,100,100}
  v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

  // few other functions
  //{10,20}
  v.size();     // 2
  v.pop_back(); //{10}
  // v1->{10,20}
  // v2->{30,40}
  v1.swap(v2); // v1->{30,40}  v2->{10,20}
  v.clear();   // erases entire vector

  return 0;
}