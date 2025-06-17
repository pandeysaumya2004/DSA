#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<char>> grid;
    vector<vector<string>> result;

    bool canPlaceQueen(int row, int col, int n) {
        // Column Check
        for (int i = row - 1; i >= 0; i--) {
            if (grid[i][col] == 'Q') // Queen is attacked
                return false;
        }

        // Left Diagonal Check
        int i, j;
        for (i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (grid[i][j] == 'Q') // Queen is attacked
                return false;
        }

        // Right Diagonal Check
        for (i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (grid[i][j] == 'Q') // Queen is attacked
                return false;
        }

        return true;
    }

    void f(int row, int n) {
        if (row == n) {
            vector<string> temp;
            for (int i = 0; i < n; i++) {
                string res = "";
                for (int j = 0; j < n; j++) {
                    res += grid[i][j];
                }
                temp.push_back(res);
            }
            result.push_back(temp);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (canPlaceQueen(row, col, n)) {
                grid[row][col] = 'Q';
                f(row + 1, n);
                grid[row][col] = '.'; // Backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        grid.clear();
        result.clear();
        grid.resize(n, vector<char>(n, '.'));
        f(0, n);
        return result;
    }
};
