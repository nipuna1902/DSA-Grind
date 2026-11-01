class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int minmrg=INT_MAX;
        for(int i=0;i<nums.size()-1;i=i+2){
            string first=to_string(nums[i]);
            string sec=to_string(nums[i+1]);
            if(stoi(first+sec)<minmrg)
            minmrg=stoi(first+sec);
        }
        return minmrg;
    }
};