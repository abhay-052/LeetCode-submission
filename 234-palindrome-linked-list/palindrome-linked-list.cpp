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
        ListNode* l = head;
        string n = "";
        
        
        while (l != NULL) {
            n += to_string(l->val);
            l = l->next;
        }
        
        string m = n;
        reverse(m.begin(), m.end());
        
       
        return n == m;
    }
};