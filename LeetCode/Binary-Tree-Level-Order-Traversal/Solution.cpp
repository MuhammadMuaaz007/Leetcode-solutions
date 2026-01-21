1
2 class Solution {
3 public:
4    vector<vector<int>> levelOrder(TreeNode* root) {
5        vector<vector<int>> result;
6        if(!root) return result;
7        queue<TreeNode*>q;
8        q.push(root);
9
10        while(q.size()>0){
11            int levelSize=q.size();
12            vector<int>currLevel;
13            for(int i=0 ; i<levelSize ; i++){
14                TreeNode* curr=q.front();
15                q.pop();
16                currLevel.push_back(curr->val);
17                if(curr->left!=NULL) q.push(curr->left);
18                if(curr->right!=NULL) q.push(curr->right);
19            }
20            result.push_back(currLevel);
21        }
22        return result;
23    }
24 };