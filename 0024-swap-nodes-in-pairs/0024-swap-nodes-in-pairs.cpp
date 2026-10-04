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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        ListNode* ans=head->next;
        ListNode* prev=NULL;
        while(head!=NULL && head->next!=NULL)
        {
            ListNode* temp=head->next;
            head->next=temp->next;
            temp->next=head;

            if(prev!=NULL)
            {
                prev->next=temp;
            }
            prev=head;
            head=head->next;
        }
        return ans;
    }
};
        // if(head==NULL || head->next==NULL)
        // {
        //     return head;
        // }
        // ListNode* temp=head->next;//1
        // ListNode* ans=temp;//1
        // while(temp!=NULL && temp->next!=NULL)
        // {
        //     head->next=temp->next;
        //     temp->next=head;

        //     head=head->next;
        //     temp=head->next;
        // }



        // if(head!=NULL && head->next!=NULL)
        // {
        //     return ans;
        // }
        // return ans;
        // if(head==NULL || head->next==NULL)
        // {
        //     return head;
        // }
        // ListNode* temp=head->next;
        // // temp=temp->next;
        // head->next=temp->next;
        // temp->next=head;
        // head=head->next;
        // while(head!=NULL && head->next!=NULL)
        // {
        //     ListNode* next=head->next;
        //     head->next=next->next;
        //     next->next=head;
        //     head=head->next;
        // }
        // return temp;