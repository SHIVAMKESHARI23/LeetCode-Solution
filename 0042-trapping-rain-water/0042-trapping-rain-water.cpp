class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftMax(n);
        leftMax[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            leftMax[i]=max(nums[i],leftMax[i-1]);
        }
        vector<int>rightMax(n);
        rightMax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rightMax[i]=max(nums[i],rightMax[i+1]);

        }
        int tappedWater=0;
        for(int i=0;i<n;i++){
            int waterLevel=min(leftMax[i],rightMax[i]);
            tappedWater+=waterLevel-nums[i];
        }
return tappedWater;
    }
};