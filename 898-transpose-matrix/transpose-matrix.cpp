class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int countrow=matrix.size();
       int countcol=matrix[0].size();
       vector<vector<int>>Transpose(countcol,vector<int>(countrow));
       for(int i=0;i<countcol;i++){
        for(int j=0;j<countrow;j++){
            Transpose[i][j]=matrix[j][i];
        }
       }
       return Transpose;

    }
};