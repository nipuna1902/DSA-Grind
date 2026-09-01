class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> freq;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(i==0 || nums[i]!=nums[i-1])
            freq[nums[i]]++;
        }
        for(auto[num,blockCount]:freq){
            if(blockCount==1)
            count++;
        }
        return count;
    }
};