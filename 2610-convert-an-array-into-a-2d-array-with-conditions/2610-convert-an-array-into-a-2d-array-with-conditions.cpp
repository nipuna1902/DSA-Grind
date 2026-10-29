
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> freq;
        for(int num:nums){
            int count=++freq[num];
            if(ans.size()<count){
                ans.push_back({});
            }
            ans[count-1].push_back(num);
        }
        return ans;
    }
};