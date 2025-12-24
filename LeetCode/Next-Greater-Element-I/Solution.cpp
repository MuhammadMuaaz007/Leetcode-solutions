1 class Solution {
2 public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int, int> mp;
5        stack<int> st;
6
7        // Process nums2
8        for (int i = 0; i < nums2.size(); i++) {
9            int num = nums2[i];
10            while (!st.empty() && num > st.top()) {
11                mp[st.top()] = num;
12                st.pop();
13            }
14            st.push(num);
15        }
16
17        // Remaining elements have no greater element
18        while (!st.empty()) {
19            mp[st.top()] = -1;
20            st.pop();
21        }
22
23        // Build result for nums1
24        vector<int> result;
25        for (int i = 0; i < nums1.size(); i++) {
26            result.push_back(mp[nums1[i]]);
27        }
28
29        return result;
30    }
31 };
32 