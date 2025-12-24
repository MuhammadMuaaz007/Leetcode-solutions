1 class Solution {
2 public:
3    int largestRectangleArea(vector<int>& heights) {
4        int n = heights.size();
5        vector<int> left(n), right(n);
6        stack<int> st;
7
8        // left boundary
9        for (int i = 0; i < n; i++) {
10            while (!st.empty() && heights[st.top()] >= heights[i])
11                st.pop();
12            left[i] = st.empty() ? -1 : st.top();
13            st.push(i);
14        }
15        
16        while (!st.empty()) st.pop();
17
18        // right boundary
19        for (int i = n - 1; i >= 0; i--) {
20            while (!st.empty() && heights[st.top()] >= heights[i])
21                st.pop();
22            right[i] = st.empty() ? n : st.top();
23            st.push(i);
24        }
25
26        int maxArea = 0;
27        for (int i = 0; i < n; i++) {
28            int width = right[i] - left[i] - 1;
29            maxArea = max(maxArea, heights[i] * width);
30        }
31
32        return maxArea;
33    }
34 };
35
