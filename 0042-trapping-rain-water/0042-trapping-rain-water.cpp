//my approach
// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n=height.size();
//         int trapwater=0;
//         for(int i=1;i<n-1;i++){
//             int rmax=height[i];
//             int lmax=height[i];
//             for(int j=i+1;j<n;j++){
//                 rmax=max(rmax,height[j]);
//             }
//             for(int k=i-1;k>=0;k--){
//                 lmax=max(lmax,height[k]);
//             }
//             int water = min(lmax, rmax) - height[i];
//             if (water > 0)
//                 trapwater += water;
//         }
//         return trapwater;
//     }
// };
//prefix array method(better)
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        vector<int> leftMax(n), rightMax(n);
        leftMax[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }
        rightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        int trappedWater = 0;
        for (int i = 0; i < n; i++) {
            trappedWater += min(leftMax[i], rightMax[i]) - height[i];
        }
        return trappedWater;
    }
};