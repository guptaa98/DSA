//ques similar to Binary Tree Cameras of Leetcode.

class Solution
{
public:
    int vaccine = 0;
    pair<bool,bool> cntcan(Node *root)
    {
        if(root == NULL)
        {
            return {false,true};
        }
        
        pair<bool,bool> l = cntcan(root->left);
        pair<bool,bool> r = cntcan(root->right);
        
        bool hasvac = false;
        bool vac = false;
        
        if(l.first || r.first)
        {
            vac = true;
        }
        if(!l.second || !r.second)
        {
            hasvac = true;
            vac = true;
            vaccine++;
        }
        
        return {hasvac,vac};
    }
    int supplyVaccine(Node* root)
    {
        pair<bool,bool> tmp = cntcan(root);
        if(!tmp.second)
        {
            vaccine++;
        }
        return vaccine;
    }
};
