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
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* build(vector<int>& nums, int l, int r) {
        if (l > r) return nullptr;

        int mid = l + (r - l) / 2;  // Avoid overflow
        TreeNode* root = new TreeNode(nums[mid]);

        // Recursively build left and right subtrees
        root->left = build(nums, l, mid - 1);
        root->right = build(nums, mid + 1, r);

        return root;
    }
};
