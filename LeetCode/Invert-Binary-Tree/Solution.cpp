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
12 class Solution {
13 public:
14    TreeNode* invertTree(TreeNode* root) {
15        if(root==NULL) return NULL;
16        queue<TreeNode*>q;
17        q.push(root);
18        while(q.size()>0){
19            TreeNode* curr=q.front();
20            q.pop();
21
22            TreeNode* temp=curr->right;
23            curr->right=curr->left;
24            curr->left=temp;
25
26            if(curr->left!=NULL) q.push(curr->left);
27            if(curr->right!=NULL) q.push(curr->right);
28        }
29        return root;
30    }
31 };
