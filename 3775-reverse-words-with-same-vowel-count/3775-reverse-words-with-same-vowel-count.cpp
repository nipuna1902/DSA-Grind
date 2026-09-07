class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }
    string reverseWords(string s){
        int n=s.size();
        int firstVowels=0;
        int i=0;
        while(i<n && s[i]!=' '){
            if(isVowel(s[i]))
                firstVowels++;
            i++;
        }
        while(i<n){
            i++;
            int start=i;
            int vowelCount=0;
            while (i<n && s[i]!=' '){
                if(isVowel(s[i]))
                    vowelCount++;
                i++;
            }

            int end=i-1;
            if (vowelCount==firstVowels){
                reverse(s.begin()+start,s.begin()+end+1);
            }
        }
        return s;
    }
};