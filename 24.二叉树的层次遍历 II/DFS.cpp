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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int n = getHeight(root);
        vector<vector<int>> result(n, vector<int>());
        dfs(root, 0, result, n - 1);
        return result;
    }

    void dfs(TreeNode* tree, int deep, vector<vector<int>>& ans, int n)
    {
        if(tree == NULL) return;
        ans[n - deep].push_back(tree->val);
        dfs(tree->left, deep+1, ans, n);
        dfs(tree->right, deep+1, ans, n);
    }

    int getHeight(TreeNode* tree){
        if(tree == NULL) return 0;
        return max(getHeight(tree->left), getHeight(tree->right)) + 1;
    }
};