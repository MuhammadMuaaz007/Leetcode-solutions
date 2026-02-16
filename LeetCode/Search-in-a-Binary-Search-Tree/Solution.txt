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
14    TreeNode* searchBST(TreeNode* root, int val) {
15        TreeNode* curr = root;
16
17        while (curr != NULL) {
18            if (curr->val == val) {
19                return curr;
20            } else if (val < curr->val) {
21                curr = curr->left;
22            } else {
23                curr = curr->right;
24            }
25        }
26        return NULL;
27    }
28};
29
30
31
32// Recursive Solution 
33
34// class Solution {
35// public:
36//     TreeNode* searchBST(TreeNode* root, int val) {
37//         if (!root) return nullptr;
38
39//         if (root->val == val) {
40//             return root;
41//         } else if (val < root->val) {
42//             return searchBST(root->left, val);
43//         } else {
44//             return searchBST(root->right, val);
45//         }
46//     }
47// };
48
49
50 