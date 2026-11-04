// week09-1.cpp 學習計畫 Matrix 第2題
// 矩陣, 希望把「兩條對角線」上面的數字加起來
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size(); // 矩陣的大小
        int ans = 0;
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (i==j || i+j==N-1) ans += mat[i][j];
            }
        }
        return ans;
    }
};