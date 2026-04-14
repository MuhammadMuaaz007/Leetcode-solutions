1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        sort(nums.begin(), nums.end()); 
5        int n = nums.size();
6        int count = 1; 
7        for (int i = n - 1; i > 0; i--) {
8
9            if (nums[i] != nums[i - 1]) {
10                count++; 
11                if (count == 3) {
12                    return nums[i - 1];
13                }
14            }
15        }
16        return nums[n - 1];
17    }
18};