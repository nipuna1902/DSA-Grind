class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int> diff(n+1,0);
        for (auto &shift:shifts) {
            int l=shift[0];
            int r=shift[1];
            int direction=shift[2];
            int val=(direction==1)?1:-1;
            diff[l]+=val;
            diff[r+1]-=val;
        }
        int currShift=0;
        for(int i=0;i<n;i++){
            currShift+=diff[i];
            int x=s[i]-'a';
            x=(x+currShift)%26;
            if(x<0)
                x+=26;
            s[i]='a'+x;
        }
        return s;
    }
};