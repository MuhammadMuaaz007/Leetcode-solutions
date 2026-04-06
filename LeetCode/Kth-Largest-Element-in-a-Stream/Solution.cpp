1class KthLargest {
2public:
3    priority_queue<int,vector<int>,greater<int>>pq;
4    int K;
5    KthLargest(int k, vector<int>& nums) {
6        K=k;
7        for(int i=0;i<nums.size();i++){
8            pq.push(nums[i]);
9            if(pq.size()>k){
10                pq.pop();
11            }
12        }
13    }
14    
15    int add(int val) {
16        pq.push(val);
17        if(pq.size()>K){
18            pq.pop();
19        }
20        return pq.top();
21    }
22};
23
24/**
25 * Your KthLargest object will be instantiated and called as such:
26 * KthLargest* obj = new KthLargest(k, nums);
27 * int param_1 = obj->add(val);
28 */