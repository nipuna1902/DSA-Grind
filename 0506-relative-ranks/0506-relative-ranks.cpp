class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> pq;
        unordered_map<int,string> mp;
        for(int sr:score){
            pq.push(sr);
        }
        int rank = 1;
        while (!pq.empty()) {
            int currentScore = pq.top();
            pq.pop();
            if (rank == 1) {
                mp[currentScore] = "Gold Medal";
            }
            else if (rank == 2) {
                mp[currentScore] = "Silver Medal";
            }
            else if (rank == 3) {
                mp[currentScore] = "Bronze Medal";
            }
            else {
                mp[currentScore] = to_string(rank);
            }
            rank++;
        }
        vector<string> ans;

        for (int s : score) {
            ans.push_back(mp[s]);
        }
        return ans;
    }
};