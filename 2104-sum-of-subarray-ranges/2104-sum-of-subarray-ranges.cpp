class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int mn = nums[i];
            int mx = nums[i];

            for (int j = i; j < n; j++) {
                mn = min(mn, nums[j]);
                mx = max(mx, nums[j]);

                ans += (long long)(mx - mn);
            }
        }

        return ans;
    }
};
// class Solution {
// public:
//     long long subArrayRanges(vector<int>& nums) {
//         int n = nums.size();
//         long long ans = 0;
//         stack<int> st;
//         for (int i = 0; i <= n; i++) {
//             while (!st.empty() && (i == n || nums[st.top()] < nums[i])) {
//                 int mid = st.top();
//                 st.pop();
//                 int left = st.empty() ? -1 : st.top();
//                 ans += 1LL * nums[mid] * (mid - left) * (i - mid);
//             }
//             st.push(i);
//         }

//         while (!st.empty()) st.pop();
//         for (int i = 0; i <= n; i++) {
//             while (!st.empty() && (i == n || nums[st.top()] > nums[i])) {
//                 int mid = st.top();
//                 st.pop();
//                 int left = st.empty() ? -1 : st.top();
//                 ans -= 1LL * nums[mid] * (mid - left) * (i - mid);
//             }
//             st.push(i);
//         }
//         return ans;
//     }
// };