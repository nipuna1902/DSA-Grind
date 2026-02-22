#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
  int n1 = nums1.size();
  int n2 = nums2.size();
  int i = 0, j = 0;
  int max = n1 + n2;
  int ind1 = max / 2;
  int ind2 = ind1 - 1;
  int c = 0;
  int ind1el = -1, ind2el = -1;
  while (i < n1 && j < n2)
  {
    if (nums1[i] < nums2[j])
    {
      if (c == ind1)
        ind1el = nums1[i];
      if (c == ind2)
        ind2el = nums1[i];
      c++;
      i++;
    }
    else
    {
      if (c == ind1)
        ind1el = nums2[j];
      if (c == ind2)
        ind2el = nums2[j];
      c++;
      j++;
    }
  }
  while (i < n1)
  {
    if (c == ind1)
      ind1el = nums1[i];
    if (c == ind2)
      ind2el = nums1[i];
    c++;
    i++;
  }
  while (j < n2)
  {
    if (c == ind1)
      ind1el = nums2[j];
    if (c == ind2)
      ind2el = nums2[j];
    c++;
    j++;
  }
  if (max % 2 == 1)
  {
    return ind1el;
  }
  return (double)((double)(ind1el + ind2el) / 2.0);
}

int main()
{
  int n, m;

  cout << "Enter size of first array: ";
  cin >> n;

  vector<int> nums1(n);
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> nums1[i];

  cout << "Enter size of second array: ";
  cin >> m;

  vector<int> nums2(m);
  cout << "Enter elements: ";
  for (int i = 0; i < m; i++)
    cin >> nums2[i];

  cout << "Median = "
       << findMedianSortedArrays(nums1, nums2);

  return 0;
}