1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        long long sum = 0;
5        for (int x =0;x<nums.size(); x++) {
6            sum += nums[x];
7        }
8        // remainder when divided by k
9        int r = sum % k;
10        // r is exactly the minimum number of –1 operations needed
11        return r;
12    }
13};
14