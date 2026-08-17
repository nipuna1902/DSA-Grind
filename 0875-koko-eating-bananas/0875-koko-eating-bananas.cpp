class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int left=1;
        int right=piles[n-1];
        while(left<right){
            int mid=left+(right-left)/2;
            int hours=0;
            for (int pile : piles) {
                hours += (pile + mid - 1) / mid;
            }
            if (hours <= h) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};