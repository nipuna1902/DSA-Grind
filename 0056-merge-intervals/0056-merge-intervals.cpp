// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end());
//         vector<vector<int>> ans;
//         for (auto interval : intervals) {
//             if (ans.empty() || ans.back()[1] < interval[0]) {
//                 ans.push_back(interval);
//             } else {
//                 ans.back()[1] = max(ans.back()[1], interval[1]);
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        int n = intervals.size();

        for (int i = 0; i < n; i++) {

            int start = intervals[i][0];
            int end = intervals[i][1];

            while (i + 1 < n && intervals[i + 1][0] <= end) {
                end = max(end, intervals[i + 1][1]);
                i++;
            }

            ans.push_back({start, end});
        }

        return ans;
    }
};