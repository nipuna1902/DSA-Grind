class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minIn,maxIn;
        int minNum=INT_MAX;
        int maxNum=INT_MIN;
        if(nums.size()==1)
        return 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minNum){
                minIn=i;
                minNum=nums[i];
            }
            if(nums[i]>maxNum){
                maxIn=i;
                maxNum=nums[i];
            }
        }
        if (minIn > maxIn)
            swap(minIn, maxIn);
        int case1 = maxIn + 1;
        int case2 = nums.size() - minIn;
        int case3 = (minIn + 1) + (nums.size() - maxIn);
        int case4 = (maxIn + 1) + (nums.size() - minIn);
        return min({case1,case2,case3,case4});
    }
};