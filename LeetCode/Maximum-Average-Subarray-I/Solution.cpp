1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        // Get sum for starting window
5        int sum = 0;
6        for (int i = 0; i < k; i++) {
7            sum += nums[i];
8        }
9
10        int maxSum = sum;
11
12        // Start sliding window
13        int startIndex = 0;
14        int endIndex = k;
15
16        while (endIndex < nums.size()) {
17            // Remove previous element
18            sum -= nums[startIndex];
19            startIndex++;
20
21            // Add next element
22            sum += nums[endIndex];
23            endIndex++;
24
25            // Update max sum
26            maxSum = max(maxSum, sum);
27        }
28
29        // Return the average
30        // *1.0 because the compiler now take the divide as in points  also. but if we do not multiply with 1.0 it will give the avarage in the integer. means the floating point numbers will not be included in the avarage
31        return (maxSum)*1.0 / k;
32    }
33};