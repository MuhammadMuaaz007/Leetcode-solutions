1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> result;
5
6        for (int i = 1; i <= n; i++) {
7            if (i % 3 == 0 && i % 5 == 0) {
8                result.push_back("FizzBuzz");
9            } else if (i % 3 == 0) {
10                result.push_back("Fizz");
11            } else if (i % 5 == 0) {
12                result.push_back("Buzz");
13            } else {
14                result.push_back(to_string(i));
15            }
16        }
17
18        return result;
19    }
20};
21