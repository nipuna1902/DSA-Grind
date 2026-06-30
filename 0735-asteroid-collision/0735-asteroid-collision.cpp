class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int x : asteroids) {
            if (st.empty() || x > 0 || st.top() < 0) {
                st.push(x);
            }
            else {
                bool destroyed = false;
                while (!st.empty() && st.top() > 0) {

                    if (st.top() > abs(x)) {
                        destroyed = true;
                        break;
                    }
                    else if (st.top() < abs(x)) {
                        st.pop();
                    }
                    else {
                        st.pop();
                        destroyed = true;
                        break;
                    }
                }
                if (!destroyed)
                    st.push(x);
            }
        }
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};