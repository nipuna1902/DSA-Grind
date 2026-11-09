class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxgap=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            maxgap=max(maxgap,nums[i]-nums[i-1]);
        }
        return maxgap;
    }
};