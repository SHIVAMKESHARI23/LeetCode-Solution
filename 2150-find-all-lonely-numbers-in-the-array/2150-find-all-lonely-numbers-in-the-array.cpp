class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>arr;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;

        }
        for(int i=0;i<nums.size();i++){
            if(arr[nums[i]]==1){
                
                if(arr.count(nums[i]+1)==0 && arr.count(nums[i]-1)==0){
                    result.push_back(nums[i]);
                }
                
                
                
            }
        }
        return result;
    }
};