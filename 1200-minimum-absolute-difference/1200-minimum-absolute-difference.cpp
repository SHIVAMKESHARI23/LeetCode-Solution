class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minval=INT_MAX;
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            int val=abs(arr[i]-arr[i+1]);
            if(minval>val){
                minval=val;
                ans.clear();
                ans.push_back({arr[i],arr[i+1]});
            }
            else if(minval==val){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};