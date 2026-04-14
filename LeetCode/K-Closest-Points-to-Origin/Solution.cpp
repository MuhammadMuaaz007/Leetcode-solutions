class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        // Max Heap
        priority_queue<pair<int, vector<int>>> pq;

        // Index-based loop
        for (int i = 0; i < points.size(); i++) {
            int dist = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            
            pq.push({dist, points[i]});

            // Keep only k closest points
            if (pq.size() > k) {
                pq.pop();
            }
        }

        // Store result
        vector<vector<int>> ans;

        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
