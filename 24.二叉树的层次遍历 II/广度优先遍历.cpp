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
        vector<vector<int>> result;
        if(root == NULL) return result;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            vector<int> vec;
            int sz = que.size();
            while(sz > 0)
            {
                sz--;
                TreeNode* u = que.front();que.pop();
                if(u != NULL)
                {
                    vec.push_back(u->val);
                    que.push(u->left);
                    que.push(u->right);
                }
            }
            if(!vec.empty())
              result.push_back(vec);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};