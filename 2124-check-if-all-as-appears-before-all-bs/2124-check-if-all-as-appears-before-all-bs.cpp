class Solution {
public:
    bool checkString(string s) {
        int i=0;
        while(i<s.length()-1){
            if(s[i]=='b' && s[i+1]=='a')
            return false;
            i++;
        }
        return true;
    }
};