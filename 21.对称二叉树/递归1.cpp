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
        if(root == NULL)
            return true;
        TreeNode* L = root->left;
        TreeNode* R = root->right; 
        if(L == NULL ^ R == NULL)
            return false;
        else if(L == NULL && R == NULL)
            return true;
        else
            return isDuichen(L, R);
    }

    bool isDuichen(TreeNode* L, TreeNode* R){
        if(L->val != R->val)
            return false;
        if(L->left == NULL && R->right == NULL && L->right == NULL && R->left == NULL)
            return true;
        else if((L->left == NULL ^ R->right == NULL) || (L->right == NULL ^ R->left == NULL))
            return false;
        else if(L->left == NULL)
            return isDuichen(L->right, R->left);
        else if(L->right == NULL)
            return isDuichen(L->left, R->right);
        else
            return isDuichen(L->right, R->left) && isDuichen(L->left, R->right);
    }
};