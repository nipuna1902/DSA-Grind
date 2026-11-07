class Solution {
public:
    bool canRemoveAll(vector<int>& types, vector<int>& colors, vector<int>& groupSize) {
        stack<tuple<int,int,int>> st;
        for(int i=0;i<types.size();i++){
            int t=types[i];
            int c=colors[i];
            if(!st.empty() && get<0>(st.top())==t && get<1>(st.top())==c){
                int cnt=get<2>(st.top())+1;
                st.pop();
                if(cnt<groupSize[t]){
                    st.push({t,c,cnt});
                }
            }
            else{
                if(groupSize[t]>1){
                    st.push({t,c,1});
                }
            }
            if(!st.empty() && get<0>(st.top())==t && get<1>(st.top())==c && get<2>(st.top())==groupSize[t])
            st.pop();
        }
        return st.empty();
    }
};