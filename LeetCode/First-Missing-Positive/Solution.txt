1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4
5        int n = nums.size();
6        bool contains1 = false;
7
8        // Step 1: Check if 1 exists and clean invalid values
9        for(int i = 0; i < n; i++){
10            if(nums[i] == 1) contains1 = true;
11
12            // Replace useless values with 1
13            if(nums[i] <= 0 || nums[i] > n){
14                nums[i] = 1;
15            }
16        }
17
18        // If 1 is missing, it's the smallest missing positive
19        if(!contains1){
20            return 1;
21        }
22
23        // Step 2: Mark presence using index (num-1)
24        for(int i = 0; i < n; i++){
25            int num = abs(nums[i]);
26            int idx = num - 1;
27
28            // Mark index negative to show that "num" exists
29            if(nums[idx] > 0){
30                nums[idx] = -nums[idx];
31            }
32        }
33
34        // Step 3: First positive index + 1 is the missing number
35        for(int i = 0; i < n; i++){
36            if(nums[i] > 0){
37                return i + 1;
38            }
39        }
40
41        // If all 1..n exist
42        return n + 1;
43    }
44};
45
46/*
47Approach: Optimal O(n) time and O(1) space using index marking.
48
491. Check if '1' exists in the array. If not, answer is 1.
50   Replace all numbers <=0 or >n with 1 because they are useless for marking.
51
522. Use the array itself as a hash map:
53   For each value 'num', mark index (num-1) as negative to indicate
54   that the number 'num' exists in the array.
55
563. After marking, the first index 'i' that has a positive value
57   means number (i+1) is missing. If all indices are negative,
58   the missing number is n+1.
59*/
60
61// The answer must be in [1, n+1] because an array of size n can contain
62// at most n distinct positive numbers. If all 1..n exist, answer is n+1.
63// Otherwise, the missing number lies within 1..n.
64