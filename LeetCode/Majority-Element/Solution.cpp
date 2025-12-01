1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int mE;
5        map<int,int>mpp;
6        for(int i=0; i<nums.size() ;i++){
7            mpp[nums[i]]++;
8        }
9            int largest=0;
10        	int num=0;
11     	for(auto it: mpp){
12		if(it.second>largest){
13			largest=it.second;
14			num=it.first;
15		}
16        }
17        return num;
18    }
19};