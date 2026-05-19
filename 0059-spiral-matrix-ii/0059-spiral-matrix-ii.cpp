class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int srow=0;
        int scol=0;
        int erow=n-1;
        int ecol=n-1;

        vector<vector<int>>ans(n,vector<int>(n));
        int count=1;
        while(srow<=erow && scol<=ecol){
            //top
            for(int i=scol;i<=ecol;i++){
                ans[srow][i]=count;
                count++;
            }

            //right
            for(int i=srow+1;i<=erow;i++){
                ans[i][ecol]=count;
                count++;
            }
            
            //bottom

            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow)break;
                ans[erow][i]=count;
                count++;
            }

            
            //left
            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol)break;
                ans[i][scol]=count;
                count++;
            }
            
            srow++;
            scol++;
            erow--;
            ecol--;

        }
        return ans;
    }
};