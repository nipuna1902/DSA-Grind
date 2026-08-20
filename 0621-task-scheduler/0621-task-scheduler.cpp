class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;
        for (char task : tasks) {
            freq[task]++;
        }
        priority_queue<int> pq;
        for (auto& [task, count] : freq) {
            pq.push(count);
        }
        int time = 0;
        while (!pq.empty()) {
            vector<int> remaining;
            int cycle = 0;
            for (int i = 0; i <= n && !pq.empty(); i++) {
                int count = pq.top();
                pq.pop();
                count--;
                cycle++;
                if (count > 0) {
                    remaining.push_back(count);
                }
            }
            for (int count : remaining) {
                pq.push(count);
            }
            if (!pq.empty()) {
                time += n + 1;
            }
            else {
                time += cycle;
            }
        }
        return time;
    }
};