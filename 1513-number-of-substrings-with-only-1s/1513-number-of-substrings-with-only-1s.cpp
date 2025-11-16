class Solution {
public:
    int numSub(string s) {
        long long cnt = 0, res = 0, mod = 1e9 + 7;
        for (char c : s) {
            if (c == '1') cnt++;
            else { 
                res = (res + (cnt * (cnt + 1) / 2) % mod) % mod;
                cnt = 0;
            }
        }
        res = (res + (cnt * (cnt + 1) / 2) % mod) % mod;
        return res;
    }
};
