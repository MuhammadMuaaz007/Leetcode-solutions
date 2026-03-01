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
14    int rangeSumBST(TreeNode* root, int low, int high) {
15        if (root == nullptr) return 0;
16
17        // If current value is smaller than low, skip left subtree
18        if (root->val < low) {
19            return rangeSumBST(root->right, low, high);
20        }
21
22        // If current value is greater than high, skip right subtree
23        if (root->val > high) {
24            return rangeSumBST(root->left, low, high);
25        }
26
27        // Current value is in range
28        return root->val
29             + rangeSumBST(root->left, low, high)
30             + rangeSumBST(root->right, low, high);
31    }
32};