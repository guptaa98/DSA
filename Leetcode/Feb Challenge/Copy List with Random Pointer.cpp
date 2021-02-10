/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        if(head==NULL)
        {
            return NULL;
        }
        
        map<Node*,int> mp;
        map<int,Node*> new_pos;
        // i acts as position number
        int i = 0;
        Node *new_head = NULL;
        Node *curr = head;
        Node *prev = NULL;
        while(curr != NULL)
        {
            Node *temp = new Node(curr->val);
            temp->next = NULL;
            mp[curr] = i;
            new_pos[i] = temp;
            
            if(prev == NULL)
            {
                new_head = temp;
            }
            else
            {
                prev->next = temp;
            }
            prev = temp;
            curr = curr->next;
            i++;
        }
        curr = head;
        Node *my_head = new_head;
        while(curr!=NULL)
        {
            if(curr->random == NULL)
            {
                my_head->random = NULL;
            }
            else
            {
                int pos = mp[curr->random];
                my_head->random = new_pos[pos];
            }
            my_head = my_head->next;
            curr = curr->next;
        }
        return new_head;
    }
};
