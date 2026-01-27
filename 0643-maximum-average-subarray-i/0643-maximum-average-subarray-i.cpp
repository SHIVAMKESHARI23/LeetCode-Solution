class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];

        }
        double maxsum=sum;
        int j=0;
        for(int i=k;i<nums.size();i++){
            sum-=nums[j];
            sum+=nums[i];
            maxsum=max(maxsum,sum);
            j++;
        }
        double ans=maxsum/k;
        return ans;
    }
};