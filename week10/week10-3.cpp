// week10-3.cpp 學習計畫 Math 第2題
// LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
// 把最高薪、最低薪,都刪掉, 算剩下的平均薪水
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;
        int M = salary[0], m = salary[0]; // 先設定其中一個值
        for (int now : salary) {
            total += now;
            if (now > M) M = now;
            if (now < m) m = now;
        }
        return (total - M - m) / ( salary.size() - 2 );
        //return total / ???;  // 錯!!!!
    }
};