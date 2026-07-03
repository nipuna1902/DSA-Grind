// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int c=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i;j<nums.size();j++){
//                 int sum=0;
//                 for(int k=i;k<=j;k++){
//                     sum+=nums[k];
//                 }
//                 if(sum==k)
//                 c++;
//             }
//         }
//         return c;
//     }
// };

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int prefixSum = 0;
        int count = 0;
        for (int num : nums) {
            prefixSum += num;
            if (mp.find(prefixSum - k) != mp.end()) {
                count += mp[prefixSum - k];
            }
            mp[prefixSum]++;
        }
        return count;
    }
};