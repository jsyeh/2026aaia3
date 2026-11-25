// week12-4.cpp 學習計畫 Linked List 第4題
// LeetCode 445. Add Two Numbers II
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        vector<int> a; // C++ 伸縮自如的陣列, 一開始沒有任何值
        while (head != nullptr) {
            a.push_back( head->val );
            head = head->next;
        }
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for (int i=a.size()-1; i>=0; i--) { // 倒過來的迴圈
            now->next = new ListNode( a[i] );
            now = now->next;
        }
        return ans->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        ListNode* ans = new ListNode(999); // 工具1
        ListNode* now = ans; // 一個會移動的指標
        int carry = 0; // 進位的英文, 叫 carry 
        while ( l1 != nullptr || l2 != nullptr ) { // 把 && 改成 ||
            if (l1 != nullptr) carry += l1->val;
            if (l2 != nullptr) carry += l2->val;
            now->next = new ListNode(carry%10);
            now = now->next;
            carry = carry/10; // 超過10的進位的部分
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        if (carry) now->next = new ListNode(carry);

        return reverse(ans->next);
    }
};