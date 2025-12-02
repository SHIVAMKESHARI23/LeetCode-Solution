class Solution {
public:
    int beautySum(string nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            string s;
            map<char,int>arr;
            for(int j=i;j<nums.size();j++){
                s+=nums[j];
                arr[nums[j]]++;
                int max=0;
                int min=INT_MAX;
                for(auto k:arr){
                if(max<k.second){
                    max=k.second;
                }
                if(min>k.second){
                    min=k.second;
                }

                }
                int v=max-min;
                if(v>0){
                    count+=v;
                }
            }
        }
        return count;
    }
};