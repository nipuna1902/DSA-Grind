class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size()*2;
        vector<int> ans(n,0);
        int a=n-1;
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[a]=nums[i];
            a--;
        }
        return ans;
    }
};