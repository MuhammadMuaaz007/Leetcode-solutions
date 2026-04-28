1class Solution {
2public:
3   int minSubArrayLen(int target, vector<int>& nums) {
4    int n = nums.size();
5    int left = 0;
6    int sum = 0;
7    int minLen = n + 1;
8
9    for (int right = 0; right < n; right++) {
10        sum += nums[right];
11
12        while (sum >= target) {
13            int len = right - left + 1;
14            if (len < minLen) {
15                minLen = len;
16            }
17            sum -= nums[left];
18            left++;
19        }
20    }
21
22    if (minLen == n + 1) return 0;
23    return minLen;
24}
25};