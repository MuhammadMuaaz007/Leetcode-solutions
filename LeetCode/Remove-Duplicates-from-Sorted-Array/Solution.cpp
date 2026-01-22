1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.size()==0)
5            return 0;
6        int head=1;
7        for(int i=1 ; i<nums.size() ; i++){
8            if(nums[i]!=nums[head-1]){
9                nums[head]=nums[i];
10                head++;
11            }
12        }
13        
14       return head;
15    }
16};