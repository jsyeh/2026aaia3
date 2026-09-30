// week04-4.cpp 學習計畫 Basic 第7題
// LeetCode 66. Plus One 加1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); // 有幾位數
        //int carry = 0; // 進位的英文叫 carry
        int carry = 1; // 因為一開始就要在最右邊+1
        for (int i=N-1; i>=0; i--) { // 倒過來的迴圈
            int now = digits[i] + carry;
            carry = now / 10; // 進位
            digits[i] = now % 10; // 個位
        }
        // 離開迴圈時, 竟然還有 carry 要進位, 麻煩了!!!
        if (carry>0) digits.insert(digits.begin(), carry);
        return digits;
    }
};
