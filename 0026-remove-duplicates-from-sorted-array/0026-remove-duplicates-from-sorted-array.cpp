class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>arr;
        for(int x:nums){
            arr[x]++;
        }
        int count=0;
       for(auto& freq:arr){
        nums[count++]=freq.first;
       }
       return count;
    }
};