class Solution {
public:
vector<int> intersection(vector<int>& nums, vector<int>& nums2) {
        vector<int>minarr;
        vector<int>maxarr2;
        vector<int>arr3;
        map<int,int>arr4;
        if(nums.size()>nums2.size()){
            minarr=nums2;
            maxarr2=nums;
        }
        else{
            minarr=nums;
            maxarr2=nums2;
        }
        for(int i=0;i<minarr.size();i++){
            int count=0;
            for(int j=0;j<maxarr2.size();j++){
                if(minarr[i]==maxarr2[j]){
                    arr4[minarr[i]];
                }
            }
            
        }
        for(auto &x:arr4){
            arr3.push_back(x.first);
        }
        return arr3;
    }
};