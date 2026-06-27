class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return helper(root, LLONG_MIN, LLONG_MAX);
    }
private:
    bool helper(TreeNode* node, long long mn, long long mx) {
        if (!node) return true;
        if (node->val <= mn || node->val >= mx) return false;
        return helper(node->left, mn, node->val) &&
               helper(node->right, node->val, mx);
    }
};