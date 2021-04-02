**
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
    bool isPalindrome(ListNode* head) 
    {
        ListNode *p,*q,*start_second,*next,*prev,*current,*next_node;
        p=q=head;
        while(1)
        {
            if(p==NULL)
            {
                return true;
                break;
            }
            else if(p->next==NULL)
            {
                return true;
                break;
            }
            else
            {
            p=p->next->next;
            if(p==NULL)
            {
                start_second=q->next;
                break;
            }
            if(p->next==NULL)
            {
                start_second=q->next->next;
                break;
            }
            q=q->next;
            }
        }
        q->next=NULL;
        prev=NULL;
        next_node=current=start_second;
        while(next_node!=NULL)
        {
            next_node=next_node->next;
            current->next=prev;
            prev=current;
            current=next_node;
        }
        start_second=prev;
        int d=0;
        while(start_second!=NULL)
        {
            if(head->val!=start_second->val)
            {
                d++;
            }
            head=head->next;
            start_second=start_second->next;
        }
        if(d==0)
        {
            return true;
        }**
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
    bool isPalindrome(ListNode* head) 
    {
        ListNode *p,*q,*start_second,*next,*prev,*current,*next_node;
        p=q=head;
        while(1)
        {
            if(p==NULL)
            {
                return true;
                break;
            }
            else if(p->next==NULL)
            {
                return true;
                break;
            }
            else
            {
            p=p->next->next;
            if(p==NULL)
            {
                start_second=q->next;
                break;
            }
            if(p->next==NULL)
            {
                start_second=q->next->next;
                break;
            }
            q=q->next;
            }
        }
        q->next=NULL;
        prev=NULL;
        next_node=current=start_second;
        while(next_node!=NULL)
        {
            next_node=next_node->next;
            current->next=prev;
            prev=current;
            current=next_node;
        }
        start_second=prev;
        int d=0;
        while(start_second!=NULL)
        {
            if(head->val!=start_second->val)
            {
                d++;
            }
            head=head->next;
            start_second=start_second->next;
        }
        if(d==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
        else
        {
            return false;
        }
    }
};
