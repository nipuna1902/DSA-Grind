
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long odd=0,even=1;
        long long sum=0,ans=0;
        int mod=1e9+7;
        for(int x:arr){
            sum+=x;
            if(sum%2==1){
                ans+=even;
                odd++;
            }
            else{
                ans+=odd;
                even++;
            }
            ans%=mod;
        }
        return ans;
    }
};