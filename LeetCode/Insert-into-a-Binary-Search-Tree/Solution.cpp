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
14    TreeNode* insertIntoBST(TreeNode* root, int val) {
15        if(!root) return new TreeNode(val);
16        TreeNode *curr=root;
17
18        while(true){
19            if(val>curr->val){
20                if(curr->right!=NULL){ 
21                    curr=curr->right;
22                }else{
23                    curr->right=new TreeNode(val);
24                    break;
25                }
26            }else{
27                if(val<curr->val){
28                    if(curr->left!=NULL){
29                       curr=curr->left;
30                    }else{
31                        curr->left=new TreeNode(val);
32                        break;
33                    }
34                }
35            }
36        }
37        return root;
38
39    }
40};
41
42// Recursion Solution
43// class Solution {
44// public:
45//     TreeNode* insertIntoBST(TreeNode* root, int val) {
46//         // base case
47//         if (root == NULL) {
48//             return new TreeNode(val);
49//         }
50
51//         if (val < root->val) {
52//             root->left = insertIntoBST(root->left, val);
53//         } 
54//         else if (val > root->val) {
55//             root->right = insertIntoBST(root->right, val);
56//         }
57
58//         return root;
59//     }
60// };
61