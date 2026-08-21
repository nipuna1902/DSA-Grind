class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        if(a>0) pq.push({a,'a'});
        if(b>0) pq.push({b,'b'});
        if(c>0) pq.push({c,'c'});
        string ans="";
        while(!pq.empty()){
            auto [maxFreq,maxChar]=pq.top();
            pq.pop();
            if(ans.size()>=2 && ans[ans.size()-1]==maxChar && ans[ans.size()-2]==maxChar){
                if(pq.empty()) break;
                auto[nextFreq,nextChar]=pq.top();
                pq.pop();
                ans+=nextChar;
                nextFreq--;
                if(nextFreq>0)
                pq.push({nextFreq,nextChar});
                pq.push({maxFreq,maxChar});
            }
            else{
                ans+=maxChar;
                maxFreq--;
                if(maxFreq>0)
                pq.push({maxFreq,maxChar});
            }
        }
        return ans;
    }
};