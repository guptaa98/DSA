/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // Null is pushed into queue to determine the end of all nodes at a partiular level. if we do not encounter with null at front position of queue that means we haven't reached at the rightmost corner and that node won't be visible when seen from right side.
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int>right;
        if(root==NULL)
        {
            return right;
        }
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            if(curr == NULL)
            {
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                if(q.front()==NULL)
                {
                    right.push_back(curr->val);
                }
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
        }
        return right;
    }
};
