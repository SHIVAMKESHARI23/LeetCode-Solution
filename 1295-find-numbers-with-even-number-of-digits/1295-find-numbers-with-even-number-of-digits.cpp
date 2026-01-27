class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int count2=0;
            while(nums[i]>0){
                // int r=nums[i]%10;
                count2++;
                nums[i]/=10;

            }
            if(count2%2==0){
                count++;
            }
        }
        return count;
    }
};