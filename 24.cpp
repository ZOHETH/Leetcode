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
    ListNode* swapPairs(ListNode* head) {
        ListNode* i_pre=NULL;
        for(ListNode *i=head;i!=NULL;i=i->next)
        {
            ListNode *j=i->next;
            if(j==NULL)
                break;
            ListNode *j_next=j->next;
            if(i_pre==NULL)
                head=j;
            else
                i_pre->next=j;
            j->next=i;
            i->next=j_next;
            i_pre=i;
        }
        return head;
    }
};