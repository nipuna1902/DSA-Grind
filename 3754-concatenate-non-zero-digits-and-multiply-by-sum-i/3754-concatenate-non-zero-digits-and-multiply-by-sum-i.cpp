class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans;
        int x=0,c=0;
        long long sum=0;
        while(n>0){
            int temp=n%10;
            if(temp!=0){
                sum+=temp;
                x=(temp*pow(10,c))+x;
                c++;
            }
            n=n/10;
        }
        return sum*x;
    }
};