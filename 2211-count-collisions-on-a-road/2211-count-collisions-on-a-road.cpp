class Solution {
public:
    int countCollisions(string directions) {
        stack<char> st;
        int ans = 0;
        for (char c : directions) {
            if (c == 'R') {
                st.push('R');
            }
            else if (c == 'S') {
                while (!st.empty() && st.top() == 'R') {
                    ans++;
                    st.pop();
                }
                st.push('S');
            }
            else {
                if (st.empty()) {
                    continue;
                }
                if (st.top() == 'S') {
                    ans++;
                }
                else {
                    ans += 2;
                    st.pop();
                    while (!st.empty() && st.top() == 'R') {
                        ans++;
                        st.pop();
                    }
                }
                st.push('S');
            }
        }
        return ans;
    }
};