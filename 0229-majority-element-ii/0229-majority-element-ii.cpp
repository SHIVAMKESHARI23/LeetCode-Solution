class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();
        int limit = n / 3;

        sort(nums.begin(), nums.end());
        
        int count = 1; 
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                if (count > limit) {
                    arr.push_back(nums[i - 1]);
                }
                count = 1; 
            }
        }

        
        if (count > limit) {
            arr.push_back(nums[n - 1]);
        }

        return arr;
    }
};
