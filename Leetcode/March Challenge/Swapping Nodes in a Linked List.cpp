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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode *p, *q;
        p = head;
        q = head;
        vector<int>la;
        while(p != NULL)
        {
            la.push_back(p->val);
            p = p->next;
        }
        int swap = la[k-1];
        la[k-1] = la[la.size()-k];
        la[la.size()-k] = swap;
        ListNode *temp = new ListNode(la[0]);
        temp->next = NULL;
        head = temp;
        for(int i = 1; i < la.size(); i++)
        {
            ListNode *t = new ListNode(la[i]);
            t->next = NULL;
            temp->next = t;
            temp = temp->next;
        }
        return head;
    }
};
