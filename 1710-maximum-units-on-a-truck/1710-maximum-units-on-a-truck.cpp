class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>& a,vector<int>& b){return a[1]>b[1];});
        int ans=0;
        for(auto&box:boxTypes){
            int boxes=box[0];
            int units=box[1];
            int take=min(truckSize,boxes);
            ans+=take*units;
            truckSize-=take;
            if(truckSize==0)
            break;
        }
        return ans;
    }
};