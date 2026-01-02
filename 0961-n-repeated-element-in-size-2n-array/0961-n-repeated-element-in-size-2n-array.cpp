class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size() / 2;
        for(int x : nums){
            mp[x]++;
            if(mp[x] == n) return x;
        }
        return -1;
    }
};
