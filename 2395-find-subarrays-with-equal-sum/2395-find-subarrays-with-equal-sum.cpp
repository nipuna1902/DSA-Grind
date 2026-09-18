class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size()-1;i++){
            freq[nums[i]+nums[1+i]]++;
        }
        for(auto& it:freq){
            if(it.second>1)
            return true;
        }
        return false;
    }
};