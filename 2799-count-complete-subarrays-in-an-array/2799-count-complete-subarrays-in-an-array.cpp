class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(), nums.end());
        int totalDistinct = st.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> mp;
            for (int j = i; j < n; j++) {
                mp[nums[j]]++;

                if (mp.size() == totalDistinct) {
                    ans += (n - j);
                    break;
                }
            }
        }
        return ans;
    }
};