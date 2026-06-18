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
    int maxDepth(TreeNode* root) {
        if (root==nullptr)
            return 0;
        // nums.push_back(maxDepth(root->left));
        // nums.push_back(maxDepth(root->right));
        return max(maxDepth(root->left)+1,maxDepth(root->right)+1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root==nullptr)
            return 0;
        int a = maxDepth(root->left);
        int b = maxDepth(root->right);
        int c = diameterOfBinaryTree(root->left);
        int d = diameterOfBinaryTree(root->right);
        int ans = max(a+b,c);
        ans = max(ans,d);
        return ans;
        // sort(nums.rbegin(),nums.rend());
        // return nums[0]+nums[1]+2;
    }
};
