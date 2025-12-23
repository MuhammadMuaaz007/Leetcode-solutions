1class Solution {
2public:
3    int minEatingSpeed(vector<int>& piles, int h) {
4        int low = 1;
5        int high = 0;
6        int ans = INT_MAX;
7
8        for (int pile : piles) {
9            high = max(high, pile);
10        }
11
12        while (low <= high) {
13            int mid = low + (high - low) / 2;
14            int totalH = totalHours(piles, mid, h);
15
16            if (totalH <= h) {
17                ans = mid;
18                high = mid - 1;
19            } else {
20                low = mid + 1;
21            }
22        }
23        return ans;
24    }
25
26    int totalHours(vector<int>& piles, int speed, int h) {
27        int total = 0;
28
29        for (int pile : piles) {
30            total += ceil((double)pile / speed);
31
32            // 🔥 EARLY EXIT → prevents overflow
33            if (total > h) {
34                return total;
35            }
36        }
37        return total;
38    }
39};
40