class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minv=INT_MAX;
        int maxv=INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(minv>nums[i]){
                minv=nums[i];
            }
            if(maxv<nums[i]){
                maxv=nums[i];
            }
        }
        return gcd(minv,maxv);
        // return gcd;
    }
};