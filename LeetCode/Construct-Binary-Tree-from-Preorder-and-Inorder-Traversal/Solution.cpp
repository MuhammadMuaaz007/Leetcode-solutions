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
14    
15    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int start, int end, int& idx) {
16        if(start > end)   return NULL;
17    
18        int rootVal = preorder[idx];
19        int i = start;
20        
21        for(; i <= end; i++) {
22            if(inorder[i] == rootVal)
23                break;
24        }
25        
26        idx++;
27        TreeNode* root = new TreeNode(rootVal);
28        root->left  = solve(preorder, inorder, start, i-1, idx);
29        root->right = solve(preorder, inorder, i+1, end, idx);
30        
31        return root;
32    }
33    
34    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
35        int n = preorder.size();
36        
37        int idx = 0;
38        
39        return solve(preorder, inorder, 0, n-1, idx);
40    }
41};