1class Solution {
2public:
3    int maxProfit(vector<int>& nums) {
4     
5         int profit=0;
6         for(int i=1;i<nums.size() ; i++){
7            if(nums[i]>nums[i-1]){
8                profit+=(nums[i]-nums[i-1]);
9            }
10         }    
11        return profit;     
12    }
13};
14
15
16    /*
17        Explanation:
18        This is a greedy approach:
19        - We take profit on every upward step (prices[i] > prices[i-1]).
20        - We do not need to track exact buy/sell days because 
21          summing all positive differences gives the maximum profit.
22        - Time Complexity: O(n), Space Complexity: O(1)
23        */