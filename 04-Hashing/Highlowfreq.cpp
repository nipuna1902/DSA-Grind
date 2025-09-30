#include <iostream>
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

  // Step 1: Find maximum element (to decide box size)
  int maxVal = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > maxVal)
      maxVal = arr[i];
  }

  // Step 2: Make "boxes" (hash array)
  int hash[maxVal + 1] = {0};

  // Step 3: Count frequencies
  for (int i = 0; i < n; i++)
  {
    hash[arr[i]]++;
  }

  // Step 4: Find highest and lowest frequency
  int highestFreq = 0, lowestFreq = n;
  int highestElem = -1, lowestElem = -1;

  for (int i = 0; i <= maxVal; i++)
  {
    if (hash[i] > 0)
    { // element exists
      if (hash[i] > highestFreq)
      {
        highestFreq = hash[i];
        highestElem = i;
      }
      if (hash[i] < lowestFreq)
      {
        lowestFreq = hash[i];
        lowestElem = i;
      }
    }
  }

  cout << "Element with highest frequency: " << highestElem
       << " (appears " << highestFreq << " times)\n";
  cout << "Element with lowest frequency: " << lowestElem
       << " (appears " << lowestFreq << " times)\n";

  return 0;
}