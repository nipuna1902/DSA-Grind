class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total=0;
        for(int x:nums){
            total=(total+x)%p;
        }
        int rem=total;
        if(rem==0)
            return 0;
        unordered_map<int, int> mp;
        mp[0]=-1;
        long long prefix=0;
        int ans=nums.size();
        for(int i =0;i<nums.size();i++){
            prefix=(prefix+nums[i])%p;
            int needed=(prefix-rem+p)%p;
            if(mp.find(needed)!=mp.end()){
                ans=min(ans,i-mp[needed]);
            }
            mp[prefix]=i;
        }
        return ans==nums.size()?-1:ans;
    }
};