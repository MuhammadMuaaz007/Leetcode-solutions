1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        while(stones.size()>1){
5            sort(stones.begin(),stones.end());
6            int a=stones.back(); stones.pop_back();
7            int b=stones.back();stones.pop_back();
8            stones.push_back(abs(a-b));
9        }
10        if(stones.size()==1){
11            return stones[0];
12        }
13        return 0;
14    }
15};