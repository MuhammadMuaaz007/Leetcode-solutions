1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        unordered_set<int> seen;
6
7        for(int num : nums){
8            seen.insert(num);
9        }
10        for(int i = 0; i <= n; i++){ // i will be consider as a number because the arrays contains only the numbers form 0 to n
11            if(seen.find(i) == seen.end()){ // this condition only true when the number will not present if the number is not present then it will return that number immediately
12                return i;
13            }
14        }
15        return n;
16    }
17};
18
19// Array contains numbers from 0 to n but one is missing.
20// Put all numbers in a hash set, then check which number from 0 to n is absent.
21// The first absent one is the missing number.
22
23