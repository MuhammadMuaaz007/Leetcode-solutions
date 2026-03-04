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
14    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
15        if (!root) return false;
16        if (isSameTree(root, subRoot)) return true;
17        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
18    }
19
20private:
21    // Check if two trees are identical
22    bool isSameTree(TreeNode* s, TreeNode* t) {
23        if (!s && !t) return true;
24        if (!s || !t) return false;
25        if (s->val != t->val) return false;
26        return isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
27    }
28};