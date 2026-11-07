class Solution {
public:
    long long countValidSubstrings(string s) {
        long long c=0;
        int n=s.length();
        int lasta=-1;
        int lastab=-1;
        int lastbad=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='a')
            lasta=i;
            else if(s[i]=='b'){
                if(lasta!=-1)
                lastab=lasta;
            }
            else if(s[i]=='c'){
                if(lastab!=-1)
                lastbad=max(lastbad,lastab);
            }
            c+=i-lastbad;
        }
        return c;
    }
};