class Solution {
public:
    string toBinary(int n) {
        if (n == 0) return "0";
        string ans = "";
        while (n) {
            ans = char((n % 2) + '0') + ans;
            n /= 2;
        }
        return ans;
    }
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        return toBinary(year) + "-" +toBinary(month) + "-" +toBinary(day);
    }
};