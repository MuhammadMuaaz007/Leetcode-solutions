1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int low = 0;
5        int mid = 0;
6        int high = nums.size() - 1;
7
8        while (mid <= high) {
9            if (nums[mid] == 0) {
10                swap(nums[mid], nums[low]);
11                low++;
12                mid++;
13            }
14            else if (nums[mid] == 1) {
15                mid++;
16            }
17            else { 
18                // whenever at the last of the array or at the high position the sorting is done we not need to increament the mid because the sorted part is at high
19                swap(nums[mid], nums[high]);
20                high--;
21                // mid is NOT incremented here
22            }
23        }
24    }
25};
26
27/*
28
29DNF (Dutch National Flag) Problem – Definition:
30
31The Dutch National Flag problem is a classic algorithmic problem where you are given an array containing three distinct types of elements (for example, 0, 1, and 2) and the goal is to sort the array in a single pass such that all elements of the same type are grouped together.
32
33The name comes from the Dutch national flag, which has three colors arranged in order.
34
35The problem is commonly solved using three pointers (low, mid, high) to partition the array into three regions.
36
37In short:
38
39Sort an array of three distinct values in one pass and constant space, grouping identical values together.*/
40
41