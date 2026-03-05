1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* target;
14    TreeNode* res;
15
16    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
17        this->target = target;
18        inorder(original, cloned);
19        return res;
20    }
21
22    void inorder(TreeNode* orig, TreeNode* cloned) {
23        if (orig != nullptr) {
24            // Traverse left
25            inorder(orig->left, cloned->left);
26
27            // Check if current node is the target
28            if (orig == target) res = cloned;
29
30            // Traverse right
31            inorder(orig->right, cloned->right);
32        }
33    }
34};
35
36// class Solution {
37// public:
38//     TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
39//         if (!original) return nullptr;
40
41//         // If we found the target node in original, return the cloned node
42//         if (original == target) return cloned;
43
44//         // Search in left subtree
45//         TreeNode* leftResult = getTargetCopy(original->left, cloned->left, target);
46//         if (leftResult) return leftResult; // if found, return immediately
47
48//         // Search in right subtree
49//         return getTargetCopy(original->right, cloned->right, target);
50//     }
51// };