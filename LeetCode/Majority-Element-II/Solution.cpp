1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        unordered_map<int,int>map;
6        vector<int>result;
7        for(int i=0; i<nums.size();i++){
8            map[nums[i]]++;
9        }
10        for(auto it:map){
11            if(it.second>(n/3)){
12                result.push_back(it.first);
13            }
14        }
15        return result;
16    }
17};