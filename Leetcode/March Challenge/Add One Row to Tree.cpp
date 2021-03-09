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
    TreeNode* addOneRow(TreeNode* root, int v, int d) 
    {
        if(d==1)
        {
            TreeNode *node = new TreeNode(v);
            node->left = root;
            return node;
        }
        queue<TreeNode*> q;
        int l = 1;
        q.push(root);
        while(l < d-1)
        {
            int s = q.size();
            for(int i = 0; i < s ; i++)
            {
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
            l++;
        }
        while(!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();
            TreeNode *left = node->left;
            node->left = new TreeNode(v);
            node->left->left = left;
            
            TreeNode *right = node->right;
            node->right = new TreeNode(v);
            node->right->right = right;
        }
        return root;
    }
};
