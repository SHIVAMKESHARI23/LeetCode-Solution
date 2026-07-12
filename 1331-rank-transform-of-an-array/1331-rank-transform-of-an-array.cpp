class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>nums;
        for(int i=0;i<arr.size();i++){
            nums[arr[i]]=0;
        }
        int count=1;
        for(auto &i:nums){
            i.second=count;
            count++;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=nums[arr[i]];
        }
        return arr;
    }
};