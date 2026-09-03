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
    vector<int> inorder(TreeNode* root) {
        vector<int> nums;
        stack<TreeNode*> st;
        while (root || !st.empty()) {
            while (root) {
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();
            nums.push_back(root->val);
            root = root->right;
        }
        return nums;
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int> nums = inorder(root);
        vector<vector<int>> ans;
        for (int q : queries) {
            auto it = lower_bound(nums.begin(), nums.end(), q);
            int mn=-1,mx=-1;
            if(it!=nums.end())
                mx=*it;
            if(it!=nums.end() && *it==q) {
                mn=*it;
            } 
            else if (it!=nums.begin()) {
                mn=*(it-1);
            }
            ans.push_back({mn, mx});
        }
        return ans;
    }
};