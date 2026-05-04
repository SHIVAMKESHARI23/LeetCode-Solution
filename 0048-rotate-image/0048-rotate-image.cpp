class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      vector<vector<int>>arr=matrix;
      int k=0;
      for(int i=matrix.size()-1;i>=0;i--){
        for(int j=0;j<matrix.size();j++){
            matrix[j][k]=arr[i][j];
        }
        k++;
      }
    }
};