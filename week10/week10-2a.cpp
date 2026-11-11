// week10-2a.cpp 學習計畫 Math 第1題 (暴力 for迴圈, 比較慢)
// LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0; // 失敗的例子
        for (int i=low; i<=high; i++) { // 失敗的例子
            if (i%2==1) ans++; // 失敗的例子
        }
        return ans; // 竟然成功了, 等一下重來一次!!!
    }
};