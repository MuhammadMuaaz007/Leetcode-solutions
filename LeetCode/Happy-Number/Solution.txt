1class Solution {
2public:
3    bool isHappy(int n) {
4        unordered_set<int> seen;
5
6        while (n != 1) {
7            if (seen.count(n)) {
8                return false; // cycle detected
9            }
10            seen.insert(n);
11
12            int sum = 0;
13            while (n > 0) {
14                int digit = n % 10;
15                sum += digit * digit;
16                n /= 10;
17            }
18            n = sum;
19        }
20        return true;
21    }
22};
23