class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int k=0;k<n;k++){
            int i=0;
            int j=n-1;
            while(i<=j){
              int temp = matrix[k][i];
              matrix[k][i]=matrix[k][j];
              matrix[k][j]=temp;
              i++;
              j--;


            }
        }
        return ;

    }
};