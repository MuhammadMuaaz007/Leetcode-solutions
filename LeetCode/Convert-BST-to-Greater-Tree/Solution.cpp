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
14    int sum = 0;
15
16    TreeNode* convertBST(TreeNode* root) {
17        reverseInorder(root);
18        return root;
19    }
20    void reverseInorder(TreeNode* node) {
21        if (!node) return;
22
23        // Step 1: Visit right subtree first (larger values)
24        reverseInorder(node->right);
25
26        // Step 2: Update current node
27        sum += node->val;
28        node->val = sum;
29
30        // Step 3: Visit left subtree
31        reverseInorder(node->left);
32    }
33};
34