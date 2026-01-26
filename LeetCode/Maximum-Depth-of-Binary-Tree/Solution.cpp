1class Solution {
2public:
3    int maxDepth(TreeNode* root) {
4        if (!root) return 0;
5
6        queue<TreeNode*> q;
7        q.push(root);
8        int depth = 0;
9
10        while (!q.empty()) {
11            int levelSize = q.size();
12            depth++;
13
14            for (int i = 0; i < levelSize; i++) {
15                TreeNode* curr = q.front();
16                q.pop();
17
18                if (curr->left) q.push(curr->left);
19                if (curr->right) q.push(curr->right);
20            }
21        }
22        return depth;
23    }
24};
25
26// class Solution {
27// public:
28//     int maxDepth(TreeNode* root) {
29//         if (root == NULL)
30//             return 0;
31
32//         int leftDepth = maxDepth(root->left);
33//         int rightDepth = maxDepth(root->right);
34
35//         return 1 + max(leftDepth, rightDepth);
36//     }
37// };
38
39