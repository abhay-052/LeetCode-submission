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
 ListNode* rev(ListNode* head,int k) {
        ListNode* prev = nullptr;   
        ListNode* curr = head;     
        ListNode* next = nullptr;   
        int i=0;
       for(int i=0;i<k;i++) {
            next = curr->next;    
            curr->next = prev;     
            prev = curr;         
            curr = next;          
        }
        
       
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL ) return head;
         ListNode* a= head;
         int i=0;
         while(a!=NULL){
            a=a->next;
            i++;
         }
         if(i<k) return head;
         int l=0;
          ListNode* b= head;
           while(l<k){
             b=b->next;
             l++;
         }
        a=head;
          ListNode* c=rev(a,k);
          ListNode* d=c;
         int j=0;
        
        a->next=reverseKGroup(b,k);

        return d;

    }
};