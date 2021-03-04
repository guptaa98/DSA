/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int c1=0,c2=0,d;
        ListNode *p,*q,*next;
        p=headA;
        q=headB;
        while(p!=NULL)
        {
            c1++;
            p=p->next;
        }
        while(q!=NULL)
        {
            c2++;
            q=q->next;
        }
        d=abs(c1-c2);
        p=headA;
        q=headB;
        if(c1>c2)
        {
            while(d--)
            {
                p=p->next;
            }
        }
        else if(c2>c1)
        {
            while(d--)
            {
                q=q->next;
            }
        }
        while(p!=q)
        {
            p=p->next;
            q=q->next;
        }
        return p;
    }
};
