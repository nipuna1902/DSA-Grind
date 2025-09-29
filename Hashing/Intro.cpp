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

  // Step 4: Print frequencies
  cout << "Frequencies:\n";
  for (int i = 0; i <= maxVal; i++)
  {
    if (hash[i] > 0)
    {
      cout << i << " -> " << hash[i] << endl;
    }
  }

  return 0;
}

// Example Walkthrough

// Array: {2, 3, 2, 5}
// Hash table initially: {0, 0, 0, 0, 0, 0}

// i = 0 → arr[0] = 2 → hash[2]++ → {0, 0, 1, 0, 0, 0}

// i = 1 → arr[1] = 3 → hash[3]++ → {0, 0, 1, 1, 0, 0}

// i = 2 → arr[2] = 2 → hash[2]++ → {0, 0, 2, 1, 0, 0}

// i = 3 → arr[3] = 5 → hash[5]++ → {0, 0, 2, 1, 0, 1}