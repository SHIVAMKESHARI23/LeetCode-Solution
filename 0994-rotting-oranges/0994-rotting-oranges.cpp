class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int,int>> arr;
        int good = 0;

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 2){
                    arr.push_back({i,j});
                }
                else if(grid[i][j] == 1){
                    good++;
                }
            }
        }

        if(good == 0) return 0;

        int count = 0;
        int idx = 0;

        while(idx < arr.size()){

            int sz = arr.size() - idx;
            bool b = false;

            while(sz--){

                int i = arr[idx].first;
                int j = arr[idx].second;
                idx++;

                if(i != 0 && grid[i-1][j] == 1){
                    grid[i-1][j] = 2;
                    arr.push_back({i-1,j});
                    good--;
                    b = true;
                }

                if(j != 0 && grid[i][j-1] == 1){
                    grid[i][j-1] = 2;
                    arr.push_back({i,j-1});
                    good--;
                    b = true;
                }

                if(i+1 < grid.size() && grid[i+1][j] == 1){
                    grid[i+1][j] = 2;
                    arr.push_back({i+1,j});
                    good--;
                    b = true;
                }

                if(j+1 < grid[0].size() && grid[i][j+1] == 1){
                    grid[i][j+1] = 2;
                    arr.push_back({i,j+1});
                    good--;
                    b = true;
                }
            }

            if(b) count++;
        }

        if(good != 0) return -1;

        return count;
    }
};