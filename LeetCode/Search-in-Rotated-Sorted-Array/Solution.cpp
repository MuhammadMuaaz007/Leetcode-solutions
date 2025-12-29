1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int st=0,end=nums.size()-1;
5        while(st<=end){
6            int mid=st+(end-st)/2;
7            if(nums[mid]==target){
8                return mid;
9            }
10            if(nums[st]<=nums[mid]){ // left sorted
11                if(nums[st]<=target && target<nums[mid]){
12                    end=mid-1;
13                }else{
14                    st=mid+1;
15                }
16            }else{ // right sorted
17                if(nums[mid]<=target && target<=nums[end]){
18                    st=mid+1;
19                }else{
20                    end=mid-1;
21                }
22            }
23        }
24        return -1;
25    }
26};