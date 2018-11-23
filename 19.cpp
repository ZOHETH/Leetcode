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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ans_p;
        ListNode* p;
        p=head;
        for(int i=0;i<n;p=p->next,i++)
            ;
        if(p==NULL)
            return head->next;
        ans_p=head;
        for(p=p->next;p!=NULL;p=p->next,ans_p=ans_p->next)
            ;
        ans_p->next=ans_p->next->next;
        return head;
    }
};