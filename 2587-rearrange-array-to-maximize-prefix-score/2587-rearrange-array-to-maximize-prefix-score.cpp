class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<>());
        int count=0;
        long long sum=0;
        for(int num:nums){
            sum+=num;
            if(sum>0)
            count++;
        }
        return count;
    }
};