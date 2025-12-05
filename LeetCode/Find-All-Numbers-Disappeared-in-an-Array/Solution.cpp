1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4          int n = nums.size();
5            vector<int>result;
6
7        for(int i = 0; i < n; i++){
8            int num = abs(nums[i]);
9            int idx = num - 1;
10
11            // Mark index negative to show that "num" exists
12            if(nums[idx] > 0){
13                nums[idx] = -nums[idx];
14            }
15        }
16        for(int i = 0; i < n; i++){ 
17            if(nums[i]>0){
18                result.push_back(i+1);    
19            }
20        }
21        return result;
22    }
23};