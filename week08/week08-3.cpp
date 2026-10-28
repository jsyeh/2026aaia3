// week08-3.cpp 學習計畫 Matrix 第3題 螺旋矩陣印出來 Medium 題
// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // 我們知道 matrix[i][j] 左手i 右手j
        // 往右、往下 vs. 往左、往上
        // j++   i++      j--  i--
        // 另外有4個變數 left right up down
        vector<int> ans; // 用來放答案的陣列
        int M = matrix.size(), N = matrix[0].size(); // 長、寬
        int left = 0, right = N-1, up = 0, down = M-1;
        while ( ans.size() < M * N ) { // 只要還沒收齊, 就繼續做
            // 往右
            int i = up;
            for (int j = left; j <= right; j++) {
                ans.push_back( matrix[i][j] );
            }
            up++; // 上面整排走完後, up++ 上邊界往下掉
            // 往下
            int j = right;
            for (int i = up; i <= down; i++) {
                ans.push_back( matrix[i][j] );
            }
            right--; // 右邊整排走完後 right-- 右邊界往左縮
            if (ans.size() == M * N) break;

            // 往左
            i = down;
            for (int j = right ; j >= left; j--) {
                ans.push_back( matrix[i][j] );
            }
            down--; // 下面整排往左走完後 down-- 下邊界往上縮
            // 往上
            j = left;
            for (int i = down; i >= up; i--) {
                ans.push_back( matrix[i][j] );
            }
            left++; // 左邊整排往上走完後 left++ 左邊界往右移
        } // 前面是錯的, 因 left, right, up, down 範圍沒有縮起來
        // 現在改好了
        return ans;
    }
};