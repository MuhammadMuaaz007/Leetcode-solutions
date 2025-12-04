1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        int n = nums.size();
5        
6        int candidate1 = 0, candidate2 = 0;
7        int count1 = 0, count2 = 0;
8
9        // 1️⃣ Find possible candidates
10        for(int num : nums) {
11            if(num == candidate1) {
12                count1++;
13            }
14            else if(num == candidate2) {
15                count2++;
16            }
17            else if(count1 == 0) {
18                candidate1 = num;
19                count1 = 1;
20            }
21            else if(count2 == 0) {
22                candidate2 = num;
23                count2 = 1;
24            }
25            else {
26                count1--;
27                count2--;
28            }
29        }
30
31        // 2️⃣ Verify counts
32        count1 = 0;
33        count2 = 0;
34        for(int num : nums) {
35            if(num == candidate1) count1++;
36            else if(num == candidate2) count2++;
37        }
38
39        // 3️⃣ Collect valid answers
40        vector<int> result;
41        if(count1 > n/3) result.push_back(candidate1);
42        if(count2 > n/3) result.push_back(candidate2);
43
44        return result;
45    }
46};
47
48/*Boyer-Moore Voting Algorithm (n/3 version) — Simple Idea
49Think of it like an election:
50
51Every number in the array is a "candidate".
52
53Candidates "fight" each other.
54
55When two different numbers meet, they cancel each other’s votes.
56
57Only the strongest potential majority candidates survive to the end.
58
59In the n/3 version:
60
61We track two candidates
62
63Each has a counter
64
65Why two?
66Because up to 2 numbers can be majority (> n/3).*/
67