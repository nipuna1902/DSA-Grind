class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int left=0;
        double maxSum=INT_MIN;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            if (right - left + 1 == k) {
                maxSum = max(maxSum, sum);
                sum -= nums[left];
                left++;
            }
        }
        return maxSum/k;
    }
};