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
14    int diameterOfBinaryTree(TreeNode* root) {
15        int diameter=0;
16        height(root,diameter);
17        return diameter;
18    }
19 int height(TreeNode* node, int& diameter) {
20    if (!node) return 0;
21
22    int lh = height(node->left, diameter);
23    int rh = height(node->right, diameter);
24
25    diameter = max(diameter, lh + rh);
26    return 1 + max(lh, rh);
27}
28};