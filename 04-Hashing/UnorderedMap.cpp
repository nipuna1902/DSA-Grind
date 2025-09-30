#include <iostream>
#include <unordered_map> // for hashing
using namespace std;

int main()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Hash map to store frequency
  unordered_map<int, int> freq;

  // Counting frequencies
  for (int i = 0; i < n; i++)
  {
    freq[arr[i]]++; // increment count for arr[i]
  }

  // Printing frequencies
  cout << "Frequencies of elements:\n";
  for (auto it : freq)
  {
    cout << it.first << " -> " << it.second << endl;
    // Loops through each key–value pair in the map.
    // auto it : freq → it is a pair (first = key, second = value).
    // Prints the key and its frequency.
  }

  return 0;
}