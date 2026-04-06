1//optimized approach
2class Solution {
3public:
4    int lastStoneWeight(vector<int>& stones) {
5        priority_queue<int> pq(stones.begin(), stones.end());
6        
7        while(pq.size() > 1) {
8            int a = pq.top(); pq.pop();
9            int b = pq.top(); pq.pop();
10            if(a != b) pq.push(a - b);
11        }
12
13        return pq.empty() ? 0 : pq.top();
14    }
15};
16
17
18// bruit force
19// class Solution {
20// public:
21//     int lastStoneWeight(vector<int>& stones) {
22//         while(stones.size()>1){
23//             sort(stones.begin(),stones.end());
24//             int a=stones.back(); stones.pop_back();
25//             int b=stones.back();stones.pop_back();
26//             stones.push_back(abs(a-b));
27//         }
28//         if(stones.size()==1){
29//             return stones[0];
30//         }
31//         return 0;
32//     }
33// };