class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if (source == destination) return true;

        vector<vector<int>> adj(n);

        // build adjacency list
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
           adj[v].push_back(u);
        }

        vector<int> vis(n, 0);
       queue<int> q;

       q.push(source);
        vis[source] = 1;

        while (!q.empty()) {
           int node = q.front();
           q.pop();

           //  correct check
            if (node == destination) return true;

            for (auto it : adj[node]) {
               if (!vis[it]) {
                    vis[it] = 1;
                   q.push(it);
               }
            }
        }

       return false;
    }
};
