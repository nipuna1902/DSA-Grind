class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int freq[26] = {};
        for (char c : s)
            freq[c - 'a']++;
        string ans;
        int i = 0;
        for (; i < target.size(); i++) {
            int x = target[i] - 'a';
            if (freq[x] == 0)
                break;
            ans += target[i];
            freq[x]--;
        }
        if (i < target.size()) {
            int x = target[i] - 'a';
            for (int j = x + 1; j < 26; j++) {
                if (freq[j] > 0) {
                    string result = ans;
                    result += char('a' + j);
                    freq[j]--;
                    for (int k = 0; k < 26; k++) {
                        while (freq[k] > 0) {
                            result += char('a' + k);
                            freq[k]--;
                        }
                    }
                    return result;
                }
            }
        }
        for (int pos = ans.size() - 1; pos >= 0; pos--) {
            freq[ans[pos] - 'a']++;
            int x = ans[pos] - 'a';
            for (int j = x + 1; j < 26; j++) {
                if (freq[j] > 0) {
                    string result = ans.substr(0, pos);
                    result += char('a' + j);
                    freq[j]--;
                    for (int k = 0; k < 26; k++) {
                        while (freq[k] > 0) {
                            result += char('a' + k);
                            freq[k]--;
                        }
                    }
                    return result;
                }
            }
        }
        return "";
    }
};