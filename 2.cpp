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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *li,*lj,*ans;
        ListNode ans_head(0);
        int temp=0,sum,x,y;
        bool first=1;
        li=l1,lj=l2;
        ans=&ans_head;
        while(li||lj||temp)
        {
            
            /*注释代码片段ans_head为指针
            if(first) 
                ans=(ListNode *)malloc(sizeof(ListNode)),ans_head=ans,first=0,ans->next=NULL;
            else
            {
                ans->next=(ListNode *)malloc(sizeof(ListNode));
                ans=ans->next;
                ans->next=NULL;
            }
            if(!lj)
            {
                sum=li->val+temp;
                li=li->next;
            }
            else if(!li)
            {
                sum=lj->val+temp;
                lj=lj->next;
            }
            else
            {
                sum=(li->val+lj->val+temp);
                li=li->next,lj=lj->next;
            }*/
            x=li?li->val:0;
            y=lj?lj->val:0;
            sum=x+y+temp;
            temp=sum/10;
            if(li!=NULL) li=li->next;
            if(lj!=NULL) lj=lj->next;
            ans->next=new ListNode(sum%10);
            ans=ans->next;
            
        }
        /*if(temp)
        {
            ans->next=(ListNode *)malloc(sizeof(ListNode));
            ans=ans->next;
            ans->next=NULL;
            ans->val=1;
        }*/
            
        return ans_head.next;
    }
};    