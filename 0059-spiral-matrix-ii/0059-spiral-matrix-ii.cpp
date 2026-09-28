class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));

        int left = 0;
        int top = 0;
        int right = n - 1;
        int bottom = n - 1;

        int num = 1;

        while (left <= right && top <= bottom) {

            // Top row → left to right
            for (int i = left; i <= right; ++i) {
                ans[top][i] = num++;
            }
            top++;

            // Right column → top to bottom
            for (int i = top; i <= bottom; ++i) {
                ans[i][right] = num++;
            }
            right--;

            // Bottom row → right to left
            if (top <= bottom) {
                for (int i = right; i >= left; --i) {
                    ans[bottom][i] = num++;
                }
                bottom--;
            }

            // Left column → bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    ans[i][left] = num++;
                }
                left++;
            }
        }

        return ans;
    }
};