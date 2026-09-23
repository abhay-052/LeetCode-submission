/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* t=head;
        while(t!=NULL){
            if(t->child!=NULL){
                Node* n=t->next;
                t->next=flatten(t->child);
                t->next->prev=t;
                t->child=NULL;
                while(t->next!=NULL){
                    t=t->next;
                }
               if(n!=NULL)
               { t->next=n;
                n->prev=t;}
            }
            t=t->next;
        }
        return head;
    }
};