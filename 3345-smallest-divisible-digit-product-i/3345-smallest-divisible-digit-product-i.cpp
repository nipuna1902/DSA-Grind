class Solution {
public:
    int smallestNumber(int n, int t) {
        int i = n;
        while (true) {
            int x = i;
            int mul = 1;
            if (x == 0)
                mul = 0;
            while (x > 0) {
                mul *= (x % 10);
                x /= 10;
            }
            if (mul % t == 0)
                return i;
            i++;
        }
    }
};