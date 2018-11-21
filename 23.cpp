/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
bool operator <(const ListNode a,const ListNode b){
        return a.val > b.val;}
class Solution {
public:
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans=NULL;
        if(lists.empty())
            return ans;
        ListNode* ans_p;
        ListNode temp(0);
        ans_p=ans=&temp;
        priority_queue<ListNode> que;
        for(ListNode *first_node:lists)
        {
            if(first_node==NULL)
                continue;
            que.push(*first_node);
        }
        while(!que.empty())
        {
            ListNode temp=que.top();
            que.pop();
            ListNode* new_node=(ListNode *)malloc(sizeof(ListNode));
            new_node->val=temp.val;
            new_node->next=NULL;
            ans_p->next=new_node;
            ans_p=ans_p->next;
            if(temp.next!=NULL)
                que.push(*temp.next);
        }
        return ans->next;
        
    }
};