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
14    int count = 0;      // counts nodes visited
15    int result = 0;     // stores kth smallest
16
17    void inorder(TreeNode* root, int k) {
18        if (!root) return;
19
20        inorder(root->left, k);   // visit left
21
22        count++;
23        if (count == k) {
24            result = root->val;   // found kth smallest
25            return;
26        }
27
28        inorder(root->right, k);  // visit right
29    }
30
31    int kthSmallest(TreeNode* root, int k) {
32        inorder(root, k);
33        return result;
34    }
35};