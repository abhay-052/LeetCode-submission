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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int c=0;
        while(temp->next!=NULL){
            c++;
            temp=temp->next;

        }
        int a=c/2;
         ListNode* tem=head;
        if(c%2==1){
            for(int i=0;i<=a;i++){
               tem=tem->next;
            }
        }
        else{
              for(int i=0;i<a;i++){
               tem=tem->next;
            }
           
        } return tem;
    }
};