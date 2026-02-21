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
14    TreeNode* bstFromPreorder(vector<int>& A) {
15        int i = 0;
16        return build(A, i, INT_MAX);
17    }
18
19    TreeNode* build(vector<int>& A, int& i, int bound) {
20        if (i == A.size() || A[i] > bound) return NULL;
21        
22        TreeNode* root = new TreeNode(A[i++]);
23        root->left = build(A, i, root->val);
24        root->right = build(A, i, bound);
25        return root;
26    }
27};