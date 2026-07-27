class Solution {
public:
    bool primeCheck(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> ans;
        for (int i = 2; i <= n / 2; i++) {
            int check = n - i;

            if (primeCheck(i) && primeCheck(check)) {
                ans.push_back({i, check});
            }
        }
        return ans;
    }
};