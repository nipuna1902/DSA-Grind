class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());
        if(hand.size()%groupSize!=0){
            return false;
        }
        map<int,int> freq;
        for(int card:hand){
            freq[card]++;
        }
        while(!freq.empty()){
            int start=freq.begin()->first;
            for(int i=start;i<start+groupSize;i++){
                if(freq.find(i)==freq.end())
                return false;
                freq[i]--;
                if(freq[i]==0)
                freq.erase(i);
            }
        }
        return true;
    }
};