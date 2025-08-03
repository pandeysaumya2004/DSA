class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> result;
        int minr = 0, maxr = r - 1;
        int minc = 0, maxc = c - 1;

        while (minr <= maxr && minc <= maxc) {
            // left to right
            for (int j = minc; j <= maxc; j++) {
                result.push_back(matrix[minr][j]);
            }
            minr++;

            // top to bottom
            for (int i = minr; i <= maxr; i++) {
                result.push_back(matrix[i][maxc]);
            }
            maxc--;

            // right to left
            if (minr <= maxr) {
                for (int j = maxc; j >= minc; j--) {
                    result.push_back(matrix[maxr][j]);
                }
                maxr--;
            }

            // bottom to top
            if (minc <= maxc) {
                for (int i = maxr; i >= minr; i--) {
                    result.push_back(matrix[i][minc]);
                }
                minc++;
            }
        }

        return result;
    }
};
