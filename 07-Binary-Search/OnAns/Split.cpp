#include <iostream>
#include <vector>
using namespace std;

int count(vector<int> &nums, int mid)
{
    int subarrays = 1;
    int currentSum = 0;
    for (int num : nums)
    {
        if (currentSum + num > mid)
        {
            subarrays++;
            currentSum = num;
        }
        else
        {
            currentSum += num;
        }
    }
    return subarrays;
}

int splitArray(vector<int> &nums, int k)
{
    int low = 0;
    int high = 0;
    for (int num : nums)
    {
        low = max(low, num);
        high += num;
    }
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int needed = count(nums, mid);
        if (needed <= k)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

int main()
{
    int n, k;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter k: ";
    cin >> k;

    cout << "Minimum Largest Sum = "
         << splitArray(nums, k) << endl;

    return 0;
}