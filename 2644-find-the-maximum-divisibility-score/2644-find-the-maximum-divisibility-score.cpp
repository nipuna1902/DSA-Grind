class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        sort(nums.begin(),nums.end());
        int score=-1;
        int maxDiv=divisors[0];
        for(int div:divisors){
            int count=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]%div==0)
                count++;
            }
            if(count>score || (count==score && div<maxDiv)){
                score=count;
                maxDiv=div;
            }
        }
        return maxDiv;
    }
};