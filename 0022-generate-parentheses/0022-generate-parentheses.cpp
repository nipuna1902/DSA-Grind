class Solution {
public:
    void generate(int open , int close,string current,vector<string> &ans){
        if(open==0 && close==0){
            ans.push_back(current);
            return;
        }
        if(open>0){
            generate(open-1,close,current+'(',ans);
        }
        if(close>open){
            generate(open, close - 1, current + ')', ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(n,n,"",ans);
        return ans;
    }
};