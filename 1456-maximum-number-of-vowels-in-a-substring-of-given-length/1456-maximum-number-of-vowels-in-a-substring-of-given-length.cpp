class Solution {
public:
    int maxVowels(string s, int k) {
        int maxvow=0;
        int left=0;
        int c=0;
        for(int right=0;right<s.length();right++){
            if (s[right]=='a' || s[right]=='e' || s[right]=='i' ||
                s[right]=='o' || s[right]=='u')
                c++;
            if (right - left + 1 > k) {
                if (s[left]=='a' || s[left]=='e' || s[left]=='i' ||
                    s[left]=='o' || s[left]=='u')
                    c--;
                left++;
            }
            if (right - left + 1 == k)
                maxvow = max(maxvow, c);
        }
        return maxvow;
    }
};