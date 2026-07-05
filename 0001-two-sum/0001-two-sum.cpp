class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int i=0;
        for(int num: nums){
            int complimentary=target-num;
            if(mp.find(complimentary)!=mp.end())
            return {mp[complimentary],i};
            mp[num]=i;
            i++;
        }
        return{};
    }
};