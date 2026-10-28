// week08-1.cpp 學習計畫 Matrix 第1題 最有錢的錢
// LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; // 最有錢的人, 有多少錢? (先設成0)
        for ( vector<int> a : accounts ) { // 大資料結構(矩陣),取出 中資料結構(陣列)
            int now = 0; // 迴圈前面 now 是 0
            for ( int num : a ) { // 中資料結構(陣列) 取出小資料結構(int)
                now += num; // 迴圈裡 慢慢加
            }
            ans = max(ans, now); // 迴圈後面拿出來用
            // 以前是用 if(now>ans) ans = now;
        }
        return ans;
    }
};