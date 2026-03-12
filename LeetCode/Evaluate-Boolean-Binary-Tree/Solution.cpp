class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        
        // Leaf node
        if(root->left == NULL && root->right == NULL) {
            return root->val;
        }

        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);

        if(root->val == 2) {
            return left || right;   // OR
        }
        else {
            return left && right;   // AND
        }
    }
};
