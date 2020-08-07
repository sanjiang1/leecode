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
        if(L == NULL && R == NULL)
           return true;
        else if(L == NULL || R == NULL)
            return false;
        else
            return L->val == R->val && isDuichen(L->left, R->right) && isDuichen(L->right, R->left);
    }
};