class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=nums[0];
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count++;
                majority=nums[i];
            }
            else if(nums[i]==majority){
                count++;
            }
            else{
                count--;
            }
        }
        return majority;
    }
};