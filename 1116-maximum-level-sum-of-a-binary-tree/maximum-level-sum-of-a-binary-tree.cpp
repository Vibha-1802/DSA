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
    int maxLevelSum(TreeNode* root) {
        if(root==nullptr) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int levelsize=0;
        TreeNode* curr;
        int levelsum=0;
        int i=0;
        int max=root->val;
        int ans=1;
        int flag=0;
        while(!q.empty())
        {
            levelsize=q.size();
            levelsum=0;
            flag++;
            for(i=0;i<levelsize;i++)
            {
                curr=q.front();
                q.pop();
                levelsum = levelsum + curr->val;
                if(curr->left)
                  q.push(curr->left);
                if(curr->right)
                  q.push(curr->right);
            }
            if(max<levelsum && flag!=1)
            {
                max=levelsum;
                ans=flag;
            }
        }
        return ans;
    }
};