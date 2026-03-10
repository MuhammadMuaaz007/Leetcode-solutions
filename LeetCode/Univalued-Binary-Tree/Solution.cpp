1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    bool isUnivalTree(TreeNode* root) {
15        if (!root) return true;
16        if (root->left && root->left->val != root->val) return false;
17        if (root->right && root->right->val != root->val) return false;
18        return isUnivalTree(root->left) && isUnivalTree(root->right);
19    }
20};