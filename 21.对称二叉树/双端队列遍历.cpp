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
    bool isSymmetric(TreeNode* root) {
        return isDuichen(root, root);
    }

    bool isDuichen(TreeNode* L, TreeNode* R){
        TreeNode *u,*v;
        queue<TreeNode*> que;
        que.push(L);que.push(R);
        while(!que.empty())
        {
            u = que.front();
            que.pop();
            v = que.front();
            que.pop();
            if(u == NULL && v == NULL) continue;
            else if(u == NULL || v == NULL || u->val != v->val) return false;
            else 
            {
                que.push(u->left);
                que.push(v->right);
                que.push(u->right);
                que.push(v->left);
            }
        }
        return true;
    }
};