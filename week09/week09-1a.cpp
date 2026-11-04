// week09-1a.cpp 學習計畫 Matrix 第2題
// 矩陣, 希望把「兩條對角線」上面的數字加起來
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size(); // 矩陣的大小
        int ans = 0;
        // 迴圈裡面, 要查對角線 方法1: 查兩條對角線
        for (int i=0; i<N; i++) { // 左上到右下
            ans += mat[i][i];
        }
        for (int i=0; i<N; i++) { // 左下到右上
            ans += mat[N-1-i][i];
        }
        // 奇數的中間, 不能重覆
        if (N%2==1) ans -= mat[N/2][N/2]; 
        return ans;
    }
};