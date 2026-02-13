class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>arr;
        int count=0;
        int sum=0;
        arr[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int diff=sum-k;
            if(arr.find(diff)!=arr.end()){
                count+=arr[diff];
            }
            arr[sum]++;
            
        }
        return count;
    }
};