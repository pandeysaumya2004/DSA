class Solution {
public:
    int lcs(string& t1, string& t2, int m, int n, vector<vector<int>>& dp) {
        if (m == 0 || n == 0) return 0;
        if (dp[m][n] != -1) return dp[m][n];

        if (t1[m - 1] == t2[n - 1])
            return dp[m][n] = 1 + lcs(t1, t2, m - 1, n - 1, dp);
        else
            return dp[m][n] = max(lcs(t1, t2, m - 1, n, dp), lcs(t1, t2, m, n - 1, dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size(), n = text2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return lcs(text1, text2, m, n, dp);
    }
};
