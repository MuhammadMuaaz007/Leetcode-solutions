1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        k %= n; // In case k > n
6        reverse(nums.begin(), nums.end());
7
8        // Step 2: Reverse the first k elements
9        reverse(nums.begin(), nums.begin() + k);
10
11        // Step 3: Reverse the remaining n-k elements
12        reverse(nums.begin() + k, nums.end());
13    }
14};
15