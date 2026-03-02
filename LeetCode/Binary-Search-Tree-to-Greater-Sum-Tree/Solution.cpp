class Solution {
public:
    int sum = 0;
    TreeNode* bstToGst(TreeNode* root) {
        reverseInorder(root);
        return root;
    }
    void reverseInorder(TreeNode* node) {
        if (!node) return;
        // Step 1: Traverse right subtree first (larger values)
        reverseInorder(node->right);

        // Step 2: Update current node
        sum += node->val;
        node->val = sum;
        // Step 3: Traverse left subtree
        reverseInorder(node->left);
    }
};
