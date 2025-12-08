class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int j=mat.size()-1;
        int sum=0;
        for(int i=0;i<mat.size()&&j>=0;i++){
            sum+=mat[i][i];
            if(i!=j){
                sum+=mat[i][j];
            }
            j--;
        }
        return sum;
    }
};