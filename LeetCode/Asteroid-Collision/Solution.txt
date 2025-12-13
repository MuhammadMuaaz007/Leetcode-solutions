1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& asteroids) {
4        vector<int> st;  // use vector as stack
5        
6        for (int i = 0; i < asteroids.size(); i++) {
7            int curr = asteroids[i];
8            
9            if (curr > 0) {
10                // Positive asteroid → always push
11                st.push_back(curr);
12            } else {
13                // Negative asteroid → may collide with right-moving asteroids
14                while (!st.empty() && st.back() > 0 && abs(st.back()) < abs(curr)) {
15                    st.pop_back();  // right-moving asteroid explodes
16                }
17                
18                if (!st.empty() && st.back() > 0 && abs(st.back()) == abs(curr)) {
19                    // Equal size → both explode
20                    st.pop_back();
21                } else if (st.empty() || st.back() < 0) {
22                    // Survived all collisions → push negative asteroid
23                    st.push_back(curr);
24                }
25            }
26        }
27        
28        return st;  // already in correct order
29    }
30};
31