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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* p=head;
        ListNode* q=head->next;
        while(q!=NULL){
            while(q->val!=0){
                p->val=p->val+q->val;
                p->next=q->next;
                delete q;
                q=p->next;
            }
            if(q->next==NULL){
                break;
            }
            p=p->next;
            q=q->next;
        }
        delete p->next;
        p->next=NULL;
        return head;
        
    }
};