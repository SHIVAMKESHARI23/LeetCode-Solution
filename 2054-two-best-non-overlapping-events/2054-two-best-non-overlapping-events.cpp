class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        
        int n = events.size();
        vector<int> ends(n), best(n);
        
        for (int i = 0; i < n; i++) {
            ends[i] = events[i][1];
            best[i] = events[i][2];
            if (i > 0) best[i] = max(best[i], best[i - 1]);
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int val = events[i][2];
            int s = events[i][0];
            int idx = lower_bound(ends.begin(), ends.end(), s) - ends.begin() - 1;
            if (idx >= 0) val += best[idx];
            ans = max(ans, val);
        }
        return ans;
    }
};
