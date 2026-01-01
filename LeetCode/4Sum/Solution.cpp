1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        int n = nums.size();
5        set<vector<int>> st;
6        vector<vector<int>> result;
7
8        if (n < 4) return result;
9
10        sort(nums.begin(), nums.end());
11
12        for (int i = 0; i < n - 3; i++) {
13            for (int j = i + 1; j < n - 2; j++) {
14
15                int left = j + 1;
16                int right = n - 1;
17
18                while (left < right) {
19                    long long sum =
20                        (long long)nums[i] + nums[j] + nums[left] + nums[right];
21
22                    if (sum == target) {
23                        st.insert({nums[i], nums[j], nums[left], nums[right]});
24                        left++;
25                        right--;
26                    }
27                    else if (sum < target) {
28                        left++;
29                    }
30                    else {
31                        right--;
32                    }
33                }
34            }
35        }
36
37        for (auto it : st) {
38            result.push_back(it);
39        }
40
41        return result;
42    }
43};
44