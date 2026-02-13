class Solution {
public:
    int heightChecker(vector<int>& nums) {
        vector<int>arr=nums;
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(arr[i]!=nums[i]){
                count++;
            }
        }
        return count;
    }
};