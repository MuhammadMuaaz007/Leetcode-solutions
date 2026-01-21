class Solution {
public:
  vector<int>result;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorderTraversal(root->left);
        result.push_back(root->val);
        inorderTraversal(root->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return result;
    }
};
