// week09-2.cpp 學習計畫 Matrix 第4題
// LeetCode 73. Set Matrix Zeroes
// 把 0 的直行、橫行,都設成0。而且 void 不用 return
// in place 直接把修改的結果, 改在 matrix 裡面
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size(); // 長、寬
        vector<int> left(M); // 左邊的對照表, M 對應 i
        vector<int> up(N); // 上面的對照, N 對應 j
        for (int i=0; i<M; i++) {
            for (int j=0; j<N; j++) {
                if (matrix[i][j]==0) {
                    left[i] = 1; // 左邊的對照表, 打勾勾
                    up[j] = 1; // 上面的對照表, 打勾勾
                }
            }
        } // 上面迴圈打勾勾
        // 下面迴圈汙染整條 (兩組迴圈, 不能合起來哦!!!)
        for (int i=0; i<M; i++) {
            for (int j=0; j<N; j++) {
                if (left[i]==1 || up[j]==1) matrix[i][j] = 0;
            }
        }
    }
};