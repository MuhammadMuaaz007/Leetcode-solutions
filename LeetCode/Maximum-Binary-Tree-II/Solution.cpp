class Solution {
public:
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        // If tree is empty or val is greater than root,
        // val becomes the new root
        if (root == nullptr || val > root->val) {
            TreeNode* node = new TreeNode(val);
            node->left = root;
            return node;
        }

        // Otherwise, insert into the right subtree
        root->right = insertIntoMaxTree(root->right, val);
        return root;
    }
};
