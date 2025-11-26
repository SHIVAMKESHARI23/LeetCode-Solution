class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        unordered_map<long long, int> mp;
        int xr = 0;
        int parity = 0;
        int ans = 0;

        long long key = ((long long)0 << 32) ^ (long long)(0 + 200000);
        mp[key] = -1;  

        for (int i = 0; i < nums.size(); i++) {
            xr ^= nums[i];
            parity += (nums[i] % 2 == 0 ? 1 : -1);

            long long newKey = ((long long)xr << 32) ^ (long long)(parity + 200000);

            if (mp.count(newKey)) {
                ans = max(ans, i - mp[newKey]);
            } else {
                mp[newKey] = i;
            }
        }

        return ans;
    }
};
