1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
14        if (!original) return nullptr;
15
16        // If we found the target node in original, return the cloned node
17        if (original == target) return cloned;
18
19        // Search in left subtree
20        TreeNode* leftResult = getTargetCopy(original->left, cloned->left, target);
21        if (leftResult) return leftResult; // if found, return immediately
22
23        // Search in right subtree
24        return getTargetCopy(original->right, cloned->right, target);
25    }
26};