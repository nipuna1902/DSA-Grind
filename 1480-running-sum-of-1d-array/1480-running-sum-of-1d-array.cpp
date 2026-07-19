class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int add=0;
        for(int num:nums){
            sum.push_back(add+=num);
        }
        return sum;
    }
};