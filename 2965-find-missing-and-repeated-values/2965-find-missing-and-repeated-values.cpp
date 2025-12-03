class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       vector<int>arr(2);
       map<int,int>mp;
       int n=grid.size();
       for(int i=0;i<grid.size();i++) {
        for(int j=0;j<grid[i].size();j++){
            mp[grid[i][j]]++;
        }
       }

       int count=0;

    for(int i=1;i<=n*n;i++){
        if(mp.find(i) != mp.end()){
            if(mp[i]==2){
                arr[0]=i;
                count++;
            }
        }
        else{
            arr[1]=i;
            count++;
        }
        if(count==2){
            break;
        }
    }
    return arr;
    }
};