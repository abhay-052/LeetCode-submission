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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* a=head;
        int m=0;
        while(a!=NULL){
            m++;
            a=a->next;
        }
          if (m == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        ListNode* c=head;
        for(int i=0;i<m-n-1;i++){
            c=c->next;
        }
        ListNode* temp=c->next;
        
        c->next=c->next->next;
        delete temp;
        return head;
    }
};