1class Solution {
2public:
3    int height(TreeNode* root){
4        if(!root){
5            return 0;
6        }
7        int leftH = height(root->left);
8        int rightH = height(root->right);
9        return max(leftH, rightH) + 1;
10    }
11    
12    bool isBalanced(TreeNode* root) {
13        if(!root){
14            return true;
15        }
16        int leftH = height(root->left);
17        int rightH = height(root->right);
18
19        if (abs(leftH - rightH) > 1) return false;
20
21        return isBalanced(root->left) && isBalanced(root->right);
22    }
23};
24