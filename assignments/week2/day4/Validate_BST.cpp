/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if (!root) {
            return true;
        }
        stack<TreeNode*> nodes;
        long long lower = LONG_MIN;
        long long upper = LONG_MAX;
        while (root || !nodes.empty()) {
            while (root) {
                nodes.push(root);
                root = root->left;
            }

            root = nodes.top();
            nodes.pop();

            if (root->val <= lower || root->val >= upper) {
                return false;
            }

            lower = root->val;
            root = root->right;
        }

        return true;
    }
}
;