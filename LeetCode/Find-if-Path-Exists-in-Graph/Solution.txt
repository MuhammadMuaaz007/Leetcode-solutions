1class Solution {
2public:
3    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
4        if (source == destination) return true;
5
6        vector<vector<int>> adj(n);
7
8        // build adjacency list
9        for (int i = 0; i < edges.size(); i++) {
10            int u = edges[i][0];
11            int v = edges[i][1];
12
13            adj[u].push_back(v);
14            adj[v].push_back(u);
15        }
16
17        vector<int> vis(n, 0);
18        queue<int> q;
19
20        q.push(source);
21        vis[source] = 1;
22
23        while (!q.empty()) {
24            int node = q.front();
25            q.pop();
26
27            //  correct check
28            if (node == destination) return true;
29
30            for (auto it : adj[node]) {
31                if (!vis[it]) {
32                    vis[it] = 1;
33                    q.push(it);
34                }
35            }
36        }
37
38        return false;
39    }
40};