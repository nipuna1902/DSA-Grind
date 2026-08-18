class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 1) {
            unordered_map<int, int> count;
            for (int num : nums) {
                count[num]++;
            }
            int ans = -1;
            for (auto &[num, freq] : count) {
                if (freq == 1) {
                    ans = max(ans, num);
                }
            }

            return ans;
        }
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }
        int first = nums[0];
        int last = nums[n - 1];
        int firstCount = 0;
        int lastCount = 0;
        for (int num : nums) {
            if (num == first) firstCount++;
            if (num == last) lastCount++;
        }
        int ans = -1;
        if (firstCount == 1) {
            ans = max(ans, first);
        }
        if (lastCount == 1) {
            ans = max(ans, last);
        }
        return ans;
    }
};