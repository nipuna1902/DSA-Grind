#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &arr)
{
  int n = arr.size();

  vector<int> pos;
  vector<int> neg;

  // Separate positive and negative numbers
  for (int x : arr)
  {
    if (x >= 0)
      pos.push_back(x);
    else
      neg.push_back(x);
  }

  // Result array
  vector<int> ans(n);

  int i = 0, j = 0, k = 0;

  // Fill alternating positive and negative
  while (i < pos.size() && j < neg.size())
  {
    ans[k++] = pos[i++];
    ans[k++] = neg[j++];
  }

  // If extra positives
  while (i < pos.size())
    ans[k++] = pos[i++];

  // If extra negatives
  while (j < neg.size())
    ans[k++] = neg[j++];

  return ans;
}

int main()
{
  int n;
  cout << "Enter size: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  vector<int> ans = rearrangeArray(arr);

  cout << "Rearranged array: ";
  for (int x : ans)
    cout << x << " ";

  return 0;
}