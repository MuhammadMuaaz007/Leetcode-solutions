1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> seen; // store numbers we've seen
5        for (int i = 0; i < nums.size(); i++) {
6            if (seen.find(nums[i]) != seen.end()) {
7                return true; // duplicate found
8            }
9            seen.insert(nums[i]);
10        }
11        return false; // no duplicates
12    }
13};