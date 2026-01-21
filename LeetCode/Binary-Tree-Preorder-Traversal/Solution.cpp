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
13   
14public:
15    vector<int>result;
16    void preorder(TreeNode* root){
17        if(root==NULL) return;
18        result.push_back(root->val);
19        preorder(root->left);
20        preorder(root->right);
21    }
22    vector<int> preorderTraversal(TreeNode* root) {
23        preorder(root);
24        return result;
25    }
26};