class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        const int MOD = 1e9 + 7;
        unordered_map<long long, long long> mp;

        for (auto &p : points)
            mp[p[1]]++;

        long long ans = 0;
        long long pref = 0;

        for (auto &it : mp) {
            long long c = it.second;
            long long ways = (c * (c - 1)) / 2;
            ans = (ans + ways * pref) % MOD;
            pref = (pref + ways) % MOD;
        }

        return ans;
    }
};
