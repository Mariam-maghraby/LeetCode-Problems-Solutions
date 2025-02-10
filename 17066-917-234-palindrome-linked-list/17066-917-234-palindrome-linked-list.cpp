/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* str = head;
        stack<int> stk;
        while(head != nullptr){
            stk.push(head->val);
            head=head->next;
        }
        head = str;
        while(stk.size() != 0){
            if(stk.top() != head->val){
                return false;
            }
            stk.pop();
            head = head->next;
        }
       
        return true;
    }
};