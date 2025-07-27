class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        vector<int> res(m + n);
        int i = 0;
        int j = 0;
        int k = 0;

        // Merge both arrays
        while (i < m && j < n) {
            if (num1[i] < num2[j]) {
                res[k++] = num1[i++];
            } else {
                res[k++] = num2[j++];
            }
        }

        // Copy remaining elements from num1
        while (i < m) {
            res[k++] = num1[i++];
        }

        // Copy remaining elements from num2
        while (j < n) {
            res[k++] = num2[j++];
        }

        // Copy result back into num1
        num1 = res;
    }
};
