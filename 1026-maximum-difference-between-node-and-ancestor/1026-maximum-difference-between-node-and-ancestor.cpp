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
    int maxDiff=0;
    void dfs(TreeNode* root,int minVal,int maxVal){
        if(root==NULL)
        return;
        maxDiff = max(maxDiff, abs(root->val - minVal));
        maxDiff = max(maxDiff, abs(root->val - maxVal));
        minVal=min(minVal,root->val);
        maxVal=max(maxVal,root->val);
        dfs(root->left, minVal, maxVal);
        dfs(root->right, minVal, maxVal);
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root,root->val,root->val);
        return maxDiff;
    }
};