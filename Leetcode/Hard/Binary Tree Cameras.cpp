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
    int camera = 0;
    pair<bool,bool> cntcan(TreeNode *root)
    {
        if(root == NULL)
        {
            return {false,true};
        }
        
        pair<bool,bool> l = cntcan(root->left);
        pair<bool,bool> r = cntcan(root->right);
        
        bool hascam = false;
        bool mon = false;
        
        if(l.first || r.first)
        {
            mon = true;
        }
        if(!l.second || !r.second)
        {
            hascam = true;
            mon = true;
            camera++;
        }
        
        return {hascam,mon};
    }

    int minCameraCover(TreeNode* root) 
    {
        pair<bool,bool> tmp = cntcan(root);
        if(!tmp.second)
        {
            camera++;
        }
        return camera;
    }
};
