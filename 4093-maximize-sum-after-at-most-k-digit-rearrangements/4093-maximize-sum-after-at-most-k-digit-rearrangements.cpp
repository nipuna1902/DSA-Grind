class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum=0;
        vector<pair<int,int>> gain;
        for(int num:nums){
            sum+=num;
            string s=to_string(num);
            sort(s.begin(),s.end(),greater<char>());
            int rearr=stoi(s);
            gain.push_back({rearr-num,num});
        }
        sort(gain.rbegin(),gain.rend());
        for(int i=0;i<min(k,(int)gain.size());i++){
            sum+=gain[i].first;
        }
        return sum;
    }
};