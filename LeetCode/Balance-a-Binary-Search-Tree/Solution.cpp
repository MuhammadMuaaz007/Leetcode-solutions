class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> vals;
        // Get sorted values from the BST
        inorder(root, vals);
        // Build a balanced BST from the sorted list
        return build(vals, 0, vals.size() - 1);
    }

private:
    // Inorder traversal to collect node values in sorted order
    void inorder(TreeNode* root, vector<int>& vals) {
        if (!root) return;
        inorder(root->left, vals);
        vals.push_back(root->val);
        inorder(root->right, vals);
    }

    // Build balanced BST from sorted array
    TreeNode* build(const vector<int>& vals, int l, int r) {
        if (l > r) return nullptr;
        int mid = (l + r) / 2;
        TreeNode* node = new TreeNode(vals[mid]);
        node->left = build(vals, l, mid - 1);
        node->right = build(vals, mid + 1, r);
        return node;
    }
};
