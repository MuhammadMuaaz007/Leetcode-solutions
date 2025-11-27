1
2class Solution {
3public:
4    vector<int> twoSum(vector<int>& nums, int target) {
5        unordered_map<int, int> mpp; 
6       
7        for (int i = 0; i < nums.size(); i++) {
8            int curVal=nums[i];
9            // curVal+somevalue(think let x)=targer
10           // somevalue=target-curVal
11            int x = target - curVal; 
12            // then i will check that the value exist in the map or not
13            if (mpp.find(x) != mpp.end()) { //used != map.end  because when the x(key) not found the find return mpp.end()
14                return {mpp[x], i};
15            }
16            mpp[curVal] = i;
17        }
18        return {}; 
19    }
20};