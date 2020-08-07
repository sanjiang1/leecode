/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int deep = 0;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            int sz = que.size();
            while(sz > 0)
            {
                sz--;
                TreeNode* u = que.front();que.pop();
                if(u->left == NULL && u->right == NULL) continue;
                else if(u->left == NULL) que.push(u->right);
                else if(u->right == NULL) que.push(u->left);
                else 
                {
                    que.push(u->left);
                    que.push(u->right);
                }
            }
            deep++;
        }
        return deep;
    }
};