/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *i, *j, *ans_h, *ans_p;
        ListNode temp(0);
        ans_h=&temp;
        ans_p=ans_h;
        i=l1,j=l2;
        while(i!=NULL&&j!=NULL)
        {
            ListNode *temp=(ListNode*)malloc(sizeof(ListNode));
            temp->next=NULL;
            if(i->val<j->val)
            {
                //ListNode temp(i->val);
                temp->val=i->val;
                i=i->next;
                //ans_p->next=&temp;
                ans_p->next=temp;
            }
            else
            {
                //ListNode temp(j->val);
                temp->val=j->val;
                j=j->next;
                //ans_p->next=&temp;
                ans_p->next=temp;
            }
            ans_p=ans_p->next;
        }
        if(i!=NULL)
            ans_p->next=i;
        else if(j!=NULL)
            ans_p->next=j;
        return ans_h->next;
    }
};