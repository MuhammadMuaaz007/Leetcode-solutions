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
12
13class Solution {
14public:
15    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
16        if (nums.empty())
17            return NULL;
18        return build(nums, 0, nums.size() - 1);
19    }
20    TreeNode* build(vector<int>& nums, int start, int end) {
21        if (start > end)
22            return NULL;
23
24        // Find index of maximum element
25        int idxMax = start;
26        for (int i = start + 1; i <= end; i++) {
27            if (nums[i] > nums[idxMax]) {
28                idxMax = i;
29            }
30        }
31
32        // Create root node
33        TreeNode* root = new TreeNode(nums[idxMax]);
34
35        // Recursively build left and right subtrees
36        root->left = build(nums, start, idxMax - 1);
37        root->right = build(nums, idxMax + 1, end);
38
39        return root;
40    }
41};