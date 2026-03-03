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
14    TreeNode* sortedArrayToBST(vector<int>& nums) {
15        return build(nums, 0, nums.size() - 1);
16    }
17
18private:
19    TreeNode* build(vector<int>& nums, int l, int r) {
20        if (l > r) return nullptr;
21
22        int mid = l + (r - l) / 2;  
23        TreeNode* root = new TreeNode(nums[mid]);
24
25        // Recursively build left and right subtrees
26        root->left = build(nums, l, mid - 1);
27        root->right = build(nums, mid + 1, r);
28
29        return root;
30    }
31};