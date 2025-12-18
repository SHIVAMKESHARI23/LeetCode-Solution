class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n = prices.size();
        long long base = 0;

        for (int i = 0; i < n; i++)
            base += 1LL * strategy[i] * prices[i];

        vector<long long> prefFirst(n + 1, 0), prefSecond(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefFirst[i + 1] = prefFirst[i] - 1LL * strategy[i] * prices[i];
            prefSecond[i + 1] = prefSecond[i] + 1LL * (1 - strategy[i]) * prices[i];
        }

        long long bestGain = 0;
        int half = k / 2;

        for (int i = 0; i + k <= n; i++) {
            long long gainFirst = prefFirst[i + half] - prefFirst[i];
            long long gainSecond = prefSecond[i + k] - prefSecond[i + half];
            bestGain = max(bestGain, gainFirst + gainSecond);
        }

        return base + bestGain;
    }
};
