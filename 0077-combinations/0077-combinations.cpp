class Solution {
public:
    vector<int> curr;
    vector<vector<int>> ans;
    void backtrack(int index,vector<int> &range,int k){
        if(index==range.size()){
            if(curr.size()==k)
            ans.push_back(curr);
            return;
        }
        curr.push_back(range[index]);
        backtrack(index+1,range,k);
        curr.pop_back();
        backtrack(index+1,range,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> range;
        for(int i=1;i<=n;i++){
            range.push_back(i);
        }
        backtrack(0,range,k);
        return ans;
    }
};