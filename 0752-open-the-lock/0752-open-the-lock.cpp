class Solution {
public:
    bool isDead(string s, vector<string>& deadends) {
        for (string x : deadends) {
            if (x == s)
                return true;
        }
        return false;
    }
    int openLock(vector<string>& deadends, string target) {
        if (isDead("0000", deadends))
            return -1;
        if (target == "0000")
            return 0;
        queue<string> q;
        bool visited[10000] = {false};
        q.push("0000");
        visited[0] = true;
        int steps = 0;
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                string curr = q.front();
                q.pop();
                if (curr == target)
                    return steps;
                for (int i = 0; i < 4; i++) {
                    string next = curr;
                    next[i] = (curr[i] - '0' + 1) % 10 + '0';
                    int num = stoi(next);
                    if (!visited[num] && !isDead(next, deadends)) {
                        visited[num] = true;
                        q.push(next);
                    }
                    next = curr;
                    next[i] = (curr[i] - '0' - 1 + 10) % 10 + '0';
                    num = stoi(next);
                    if (!visited[num] && !isDead(next, deadends)) {
                        visited[num] = true;
                        q.push(next);
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};