class Solution {
public:
    vector<string> ans;
    void solve(int index,string &s){
        if (index == s.size()) {
            ans.push_back(s);
            return;
        }
        if (isdigit(s[index])) {
            solve(index + 1, s);
            return;
        }
        s[index] = tolower(s[index]);
        solve(index + 1, s);
        s[index] = toupper(s[index]);
        solve(index + 1, s);
        s[index] = tolower(s[index]);
    }
    vector<string> letterCasePermutation(string s) {
        solve(0,s);
        return ans;
    }
};