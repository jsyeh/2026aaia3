// week05-3a.cpp 學習計畫 Built-in Functions 第2題
// LeetCode 58. Length of Last Word 最後一個字的長度
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, now = 0; // 一開始,都是0
        for (char c : s) { // 逐字母處理
            if (c==' ') { // 遇到' '空格, 要斷字
                if(now!=0) ans = now; // (收成)現在的字串有長度, 更新答案
                now = 0; // 又將是「新的開始」
            }else now++; // 普通字母, now++ 又多1個字母, 開心
        }
        if(now!=0) ans = now; // (收成)現在的字串有長度, 更新答案
        return ans;
    }
};
