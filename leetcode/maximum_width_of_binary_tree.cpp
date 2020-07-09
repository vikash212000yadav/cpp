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
    map<int,unsigned> mp;
    unsigned m=1;

    void dfs(TreeNode*root, int l, unsigned p)
    {
        if(root == NULL)
            return;
        
        if(mp.find(l) == mp.end())
            mp[l] = p;
        else
            m = max(m, p-mp[l]+1);
    
        dfs(root->left, l+1, 2*p);
        dfs(root->right, l+1, 2*p+1);
        return;
    }
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) 
            return 0;
        
        dfs(root, 0, 0);
        return m;
    }
};
