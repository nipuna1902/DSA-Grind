class Solution {
public:
    string reorganizeString(string s) {
        string ans="";
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto& [letter,count]:freq){
            pq.push({count,letter});
        }
        int prevCount=0;
        char prevChar=' ';
        while(!pq.empty()){
            auto[count,ch]=pq.top();
            pq.pop();
            ans+=ch;
            count--;
            if(prevCount>0){
                pq.push({prevCount,prevChar});
            }
            prevCount=count;
            prevChar=ch;
        }
        if (prevCount > 0) {
            return "";
        }
        return ans;
    }
};