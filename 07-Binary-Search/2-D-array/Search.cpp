#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int t)
{
  int n = matrix.size();
  int m = matrix[0].size();
  int low = 0, high = (n * m) - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    int row = mid / m;
    int column = mid % m;
    if (matrix[row][column] == t)
      return true;
    else if (matrix[row][column] < t)
      low = mid + 1;
    else if (matrix[row][column] > t)
      high = mid - 1;
    else
      return false;
  }
}

int main()
{
  int n, m, target;
  cout << "Enter number of rows and columns: ";
  cin >> n >> m;
  vector<vector<int>> matrix(n, vector<int>(m));

  cout << "Enter matrix elements: ";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> matrix[i][j];
    }
  }
  cout << "Enter target: ";
  cin >> target;

  if (searchMatrix(matrix, target))
    cout << "Element was found";
  else
    cout << "Element was not found";
  return 0;
}