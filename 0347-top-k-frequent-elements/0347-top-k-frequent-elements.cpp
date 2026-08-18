class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        priority_queue<pair<int,int>> pq;
        for (auto& [num, count] : freq) {
            pq.push({count,num});//priority_queue<pair<int,int>> compares the first value first
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};