// week07-3.cpp 學習計畫 Simulation 第4題
// LeetCode 1041. Robot Bounded In Circle 會不會繞圈圈
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, d = 0; // d是 0:北 1:東 2:南 3:西
        for (char c : instructions) {
            if (c=='R') d = (d+1) % 4; // 向右轉
            if (c=='L') d = (d-1+4) % 4; // 向左轉
            if (c=='G') { // 前進
                if (d==0) y++; // 往北走
                if (d==1) x++; // 往東走
                if (d==2) y--; // 往南走
                if (d==3) x--; // 往西走
            }
        }
        // 指令走完、離開迴圈, 要檢查 (1) 回到原來的位置, 1次就繞回來  (2) 方向有改, 4次繞圈圈 
        if (x==0 && y==0) return true;  // 回到原來的位置
        if (d != 0) return true; // 跟原來方向不一樣, 4次後, 也是繞圈圈
        return false; // 越走越遠, 不會回來了
    }
};