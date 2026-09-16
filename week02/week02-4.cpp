// week02-4.cpp 學習計畫 Basic 第2題
// LeetCode 389. Find the Difference
// 給你2個字串, 右邊打亂後, 多了1個, 找出來
// 整理一下左邊 s 的字母, 再讓右邊 t 用掉。不用夠時,找到答案
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[1000] = {};
        for (char c : s) {
            H[c] += 1;
        }
        for (char c : t) {
            H[c] -= 1;
            if (H[c]<0) return c;
        }
        return 0;
/*      int H[26] = {}; // 用陣列統計左邊 s 的字母，大括號{} 代表都是0
        for (char c : s) { // C++ 進階 for迴圈, 可把字母「一個一個」取出來
            H[c-'a'] += 1; // 統計字母出現次數 (這個字母, 又多了1個)
        }
        for (char c : t) { // C++ 進階 for迴圈, 可把字母「一個一個」取出來
            H[c-'a'] -= 1; // 用掉1個字母
            if ( H[c-'a'] < 0 ) return c; // 這個字母不夠用, 找到答案了!
        }
        return 0;
*/
    }
};
