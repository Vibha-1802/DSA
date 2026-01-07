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
    long maxp=0;
    int sum=0;
    int totalSum(TreeNode* root){
        if(root==NULL)
        return 0;
        int leftsubtreesum=totalSum(root->left);
        int rightsubtreesum=totalSum(root->right);
        long totalsum=root->val+leftsubtreesum+rightsubtreesum;
        long product=totalsum*(sum-totalsum);
        maxp=max(maxp,product);
        return totalsum;
    }
    int maxProduct(TreeNode* root) {
        if(root==NULL)
        return 0;
        sum=totalSum(root);
        totalSum(root);
        return (maxp%1000000007);
    }
};