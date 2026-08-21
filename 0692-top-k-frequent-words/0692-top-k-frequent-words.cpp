class Solution {
public:
    struct Compare{
        bool operator()(pair<int,string>& a,pair<int,string>& b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            return a.first<b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        sort(words.begin(),words.end());
        vector<string> ans;
        unordered_map<string,int> freq;
        for(string word:words){
            freq[word]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,Compare> pq;
        for(auto it:freq){
            pq.push({it.second,it.first});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};