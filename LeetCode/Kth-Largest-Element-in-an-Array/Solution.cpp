// optimal solution
class Solution {
public:
 int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-heap
    
    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    
    return minHeap.top();
}
};
// second solution
int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());     // Sort ascending
    return nums[nums.size() - k];       // kth largest
}
