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
 //optimal
class Solution {
public:
    int i = 0;
    TreeNode* build(vector<int>& preorder, int bound) {
        if (i == preorder.size() || preorder[i] > bound)
            return NULL;
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = build(preorder, root->val);
        root->right = build(preorder, bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return build(preorder, INT_MAX);
    }
};
// class Solution {
// public:
//     TreeNode* insert(TreeNode* root,int val){
//         if (!root)
//             return new TreeNode(val);
//         if (val < root->val)
//             root->left = insert(root->left, val);
//         else
//             root->right = insert(root->right, val);
//         return root;
//     }
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         TreeNode* root=nullptr;
//         for (int x : preorder)
//             root = insert(root, x);
//         return root;
//     }
// };