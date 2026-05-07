class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        vector<pair<int,int>>arr;
        for(int i=0;i<pairs.size();i++){
            arr.push_back({pairs[i][1],pairs[i][0]});
        }
        sort(arr.begin(),arr.end());
        int count=1;
        int lastcount=arr[0].first;
        for(int i=1;i<arr.size();i++){
            if(lastcount<arr[i].second){
                count++;
                lastcount=arr[i].first;
            }
        }
        return count;
    }
};