class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
        int start = 0, maxlen = 0;
        for(int i = 0; i < s.size(); i++) {
            if(last[s[i]] >= start) {
                start = last[s[i]] + 1;
            }
            last[s[i]] = i;
            maxlen = max(maxlen, i - start + 1);
        }
        return maxlen;
    }
};
