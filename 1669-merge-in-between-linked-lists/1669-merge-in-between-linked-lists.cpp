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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* temp2=list2;
        ListNode* temp3=list1;
        for(int i=0;i<a-1;i++)
        {
            temp=temp->next;
        }
        for(int i=0;i<b+1;i++)
        {
            temp3=temp3->next;
        }
        temp->next=temp2;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp3;
        return list1;
    }
};

        // ListNode* temp=list1->head;
        // ListNode* temp2=list2->head;
        // for(auto i:list1)
        // {
        //     if(i==a-1)
        //     {
        //         temp-next=NULL;
        //         for(int i=0;i<list2.size();i++)
        //         {
        //             temp->next=temp2;
        //             temp2=temp2->next;
        //             if(list1==b+1)
        //             {
        //                 break;
        //             }
        //         }
        //     }
        //     temp=temp->next;
        // }
        // return list1;