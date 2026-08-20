class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        string ans="";
        for(char c:s){
            freq[c]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it:freq){
            pq.push({it.second, it.first});
        }
        while(pq.size()>0){
            if(pq.top().first>1){
                int count=pq.top().first;
                while(count>1){
                    ans+=pq.top().second;
                    count--;
                }
            }
            ans+=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};