1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& arr) {
4        vector<vector<int>> result;  // Declare result first
5        if (arr.size() < 3) return result;
6
7        sort(arr.begin(), arr.end()); // Sort the array
8
9        set<vector<int>> s; // to avoid duplicates
10
11        for (int i = 0; i < arr.size() - 2; i++) {
12            int left = i + 1;
13            int right = arr.size() - 1;
14
15            while (left < right) {
16                int sum = arr[i] + arr[left] + arr[right];
17                if (sum == 0) {
18                    s.insert({arr[i], arr[left], arr[right]});
19                    left++;
20                    right--;
21                } else if (sum < 0) {
22                    left++;
23                } else {
24                    right--;
25                }
26            }
27        }
28
29        // Copy elements from set to result vector
30        result = vector<vector<int>>(s.begin(), s.end());
31
32        return result;
33    }
34};
35