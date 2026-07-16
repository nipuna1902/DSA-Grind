#include <numeric>
using namespace std;

class Solution {
public:
    vector<int> prefixGcd;
    long long gcdSum(vector<int>& nums) {
        prefixGcd.clear();
        long long ans = 0;
        int mx = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            prefixGcd.push_back(gcd(nums[i], mx));
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int left = 0;
        int right = prefixGcd.size() - 1;
        while (left < right) {
            ans += gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }
        return ans;
    }
};