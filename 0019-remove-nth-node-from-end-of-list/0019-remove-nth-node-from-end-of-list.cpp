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
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        int pos=size-n;
        if(pos==0)
        {
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }
        temp=head;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        ListNode* del=temp->next;
        temp->next=del->next;
        delete del;

        return head;
    }
};
        // ListNode* tail=head.size()-n;
        // for(int i=0;i<head.size();i++)
        // {
        //     temp=temp->next;
        //     if(temp==tail)
        //     {
        //         temp->next->next;
        //         tail->next=NULL;
        //     }
        // }
        // return head;