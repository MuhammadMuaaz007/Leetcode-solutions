1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
13        if(root==NULL){
14            return NULL;
15        }
16        if(root==p || root==q){
17            return root;
18        }
19        TreeNode* leftN=lowestCommonAncestor(root->left, p , q);
20        TreeNode* rightN=lowestCommonAncestor(root->right, p , q);
21
22        if(leftN !=NULL && rightN!= NULL){
23            return root;
24        }
25        if(leftN==NULL){
26            return rightN;
27        }
28        return leftN;
29    }
30};