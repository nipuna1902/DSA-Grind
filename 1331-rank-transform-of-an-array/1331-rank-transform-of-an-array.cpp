class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;
        unordered_map<int,int> mp;
        vector<int> sorted = arr;
        int rank=1;
        sort(sorted.begin(), sorted.end());
        for(int x:sorted){
            if (!mp.count(x)) {
                mp[x] = rank++;
            }
        }
        for(int i=0;i<arr.size();i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};