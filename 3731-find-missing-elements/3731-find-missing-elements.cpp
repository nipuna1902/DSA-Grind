class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            int prev = nums[i - 1];
            while (prev + 1 < nums[i]) {
                ans.push_back(prev + 1);
                prev++;
            }
        }
        return ans;
    }
};