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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        if(root == NULL) 
            return v;
        vector<int> *vec;
        int n;
        TreeNode* current;
        queue<TreeNode*> q;        
        q.push(root);
        while(!q.empty()) 
        {
            vec = new vector<int>;
            n = q.size();
            for(int i = 0; i < n; i++) 
            {
                current = q.front();
                q.pop();
                vec->push_back(current->val);
                if(current->left != NULL) 
                    q.push(current->left);
                if(current->right != NULL) 
                    q.push(current->right);
            }
            v.push_back(*vec);
            delete vec;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
