1class Solution {
2public:
3   int findKthLargest(vector<int>& nums, int k) {
4    sort(nums.begin(), nums.end());    
5    return nums[nums.size() - k];       
6}
7};