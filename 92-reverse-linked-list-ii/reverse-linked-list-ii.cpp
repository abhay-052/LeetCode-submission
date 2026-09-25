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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || head->next == NULL || left == right) return head;
        
        int i = 1;
        ListNode* x = head;
        while(i < left - 1){
            x = x->next;
            i++;
        }
        
        int j = 1; 
        ListNode* y = head;
        while(j < right){
            y = y->next;
            j++;
        }
        
        ListNode* post_y = y->next;
        
        ListNode* pre = NULL;
        ListNode* cur = (left == 1) ? head : x->next;
        ListNode* n = NULL;
        
        while(cur != post_y){
            n = cur->next;
            cur->next = pre;
            pre = cur;
            cur = n;
        }
        
        if(left == 1) {
            head->next = post_y; 
            return pre;          
        }
        else { 
            x->next->next = post_y; 
            x->next = pre;          
            return head;
        }
    }
};

    
