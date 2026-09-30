// week04-3.cpp 學習計畫 Basic 第10題
// LeetCode 896. Monotonic Array
// 只會增加、只會減少的陣列, 沒有變化, 叫「單調」
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // 紅色代表往上、綠色代表往下
        int red = 0, green = 0;
        for (int i=0; i<nums.size()-1; i++) {
            if (nums[i] < nums[i+1]) red++;
            if (nums[i] > nums[i+1]) green++;
        } // 因為迴圈裡有 +1 所以上面要 -1
        if (red==0 || green==0) return true;
        return false;
    }
};
