class Solution {
public:
    int totalFruit(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();

        int first = nums[0];
        int second = -1;

        int count = 0;
        int lastCount = 0;
        int maxcount = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == first || nums[i] == second) {
                count++;
            } else {
                count = lastCount + 1;
            }

            if (nums[i] == second) {
                lastCount++;
            } else {
                lastCount = 1;
                first = second;
                second = nums[i];
            }

            maxcount = max(maxcount, count);
        }

        return maxcount;
    }
};
