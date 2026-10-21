// week07-2.cpp 學習計畫 Simulation 第3題 不 Easy 的 Easy 題
// LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:  // 大資料結構 moves 裡面放 中資料結構 move 裡面放小資料結構 int 的 i,j
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {0}; // C語言的2維陣列, 裡面都是0
        int who = 1; // 1:A, 2:B 現在輪到「誰」?
        string whoTable[3] = {"Draw", "A", "B"};
        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = who;  // 要放會變動的「誰」
            // 暫時停在這裡, 下課10分鐘
            if (a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][2] == who) return whoTable[who];
            if (a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][2] == who) return whoTable[who];
            if (a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][2] == who) return whoTable[who];

            if (a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[2][0] == who) return whoTable[who];
            if (a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[2][1] == who) return whoTable[who];
            if (a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[2][2] == who) return whoTable[who];

            if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[2][2] == who) return whoTable[who];
            if (a[2][0] == a[1][1] && a[1][1] == a[0][2] && a[0][2] == who) return whoTable[who];
            if (who==1) who = 2; // 換2:B
            else who = 1; // 換 1:A
            // myShowTable(a); 暫時印出來而已啦, 印完就不用再印了
        }
        //return "A"; // 先亂寫 "A" 會得勝
        if (moves.size() == 9) return "Draw"; // 平手 (小心, 有一個小陷阱, 等一下會爆炸)
        else return "Pending"; // 還沒有下完啦啦啦啦啦啦啦~~~
    }
    
    void myShowTable(int a[3][3]) { // 我們自己寫的、秀板子的程式
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
};