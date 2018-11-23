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
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<ListNode*> node;
        ListNode* pre=NULL;
        int cnt=0;
        for(ListNode* i=head;i!=NULL;i=i->next)
        {
            node.push(i);
            cnt++;
            if(cnt==k)
            {
                ListNode *next=i->next;
                while(cnt--)
                {
                    if(pre==NULL){
                        pre=head=node.top();
                        node.pop();
                    }
                    else{
                        pre=pre->next=node.top();
                        node.pop();
                    }             
                }
                pre->next=next;
                i=pre;
                //cnt=-1????
                cnt=0;  
            }
        }
        return head;
    }
};