1
2class Solution {
3public:
4 int findKthLargest(vector<int>& nums, int k) {
5    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-heap
6    
7    for (int num : nums) {
8        minHeap.push(num);
9        if (minHeap.size() > k) {
10            minHeap.pop();
11        }
12    }
13    
14    return minHeap.top();
15}
16};