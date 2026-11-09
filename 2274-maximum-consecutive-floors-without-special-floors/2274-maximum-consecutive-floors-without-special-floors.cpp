class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int maxfloor=0;
        sort(special.begin(),special.end());
        maxfloor=max(maxfloor,special[0]-bottom);
        for(int i=1;i<special.size();i++){
            int floors=special[i]-special[i-1]-1;
            maxfloor=max(maxfloor,floors);
        }
        maxfloor=max(maxfloor,top-special.back());
        return maxfloor;
    }
};