class Solution {
public:
    int maxProduct(int n) {
        int i=0;
        vector<int> digits;
        while(n>0){
            digits.push_back(n%10);
            i++;
            n=n/10;
        }
        sort(digits.begin(),digits.end());
        return digits[i-1]*digits[i-2];
    }
};