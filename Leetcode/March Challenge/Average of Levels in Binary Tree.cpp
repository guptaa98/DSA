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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<double>ans;
        queue<TreeNode*>q;
        if(!root)
        {
            return ans;
        }
        q.push(root);
        while(!q.empty())
        {
            double eachlevsum=0.00;
            int levsize=q.size();
            for(int i=0;i<levsize;i++)
            {
                TreeNode *curr=q.front();
                q.pop();
                eachlevsum+=(double)curr->val;
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
            ans.push_back(eachlevsum/(double)levsize);
        }
        return ans;
    }
};
