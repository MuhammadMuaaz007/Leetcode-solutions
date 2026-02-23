1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> children;
7
8    Node() {}
9
10    Node(int _val) {
11        val = _val;
12    }
13
14    Node(int _val, vector<Node*> _children) {
15        val = _val;
16        children = _children;
17    }
18};
19*/
20
21class Solution {
22public:
23    vector<int> result;
24
25    void dfs(Node* node) {
26        if (!node) return;
27
28        result.push_back(node->val);
29
30        for (Node* child : node->children) {
31            dfs(child);
32        }
33    }
34
35    vector<int> preorder(Node* root) {
36        result.clear();
37        dfs(root);
38        return result;
39    }
40};