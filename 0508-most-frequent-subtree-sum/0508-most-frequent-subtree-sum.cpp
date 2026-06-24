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
        unordered_map<int, int> freq;
        int maxFreq=0;
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int> ans;
        for (auto& [sum, count] : freq) {
            if (count == maxFreq)
                ans.push_back(sum);
        }
        return ans;
    }
    int dfs(TreeNode* root){
        if (!root) return 0;
        int leftsum=dfs(root->left);
        int rightsum=dfs(root->right);
        int sum=root->val+leftsum+rightsum;
        maxFreq = max(maxFreq, ++freq[sum]);
        return sum;
    }
};