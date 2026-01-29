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
14    int minDepth(TreeNode* root) {
15        
16        if (!root) return 0;
17
18        queue<TreeNode*> q;
19        q.push(root);
20        int depth = 1;
21        
22        while (!q.empty()) {
23            int levelSize = q.size();
24            
25            for (int i = 0; i < levelSize; i++) {
26                TreeNode* curr = q.front();
27                q.pop();
28                if (!curr->left && !curr->right) {
29                    return depth; // first leaf encountered
30                }
31                if (curr->left) q.push(curr->left);
32                if (curr->right) q.push(curr->right);
33            }
34            depth++;
35        }
36        return depth;
37    }
38
39};