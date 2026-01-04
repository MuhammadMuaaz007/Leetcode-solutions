1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n = nums.size();
5
6        if (n == 1) return 0; // single element
7        if (nums[0] > nums[1]) return 0; // peak at start
8        if (nums[n-1] > nums[n-2]) return n-1; // peak at end
9
10        int st = 1, end = n - 2;
11        while (st <= end) {
12            int mid = st + (end - st) / 2;
13
14            if (nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]) {
15                return mid; // peak found
16            }
17            else if (nums[mid-1] < nums[mid]) {
18                st = mid + 1;
19            } else {
20                end = mid - 1;
21            }
22        }
23        return -1; // won't happen for valid inputs
24    }
25};
26