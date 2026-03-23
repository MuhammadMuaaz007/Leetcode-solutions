1class Solution {
2public:
3    bool isPalindrome(int x) {
4        string s = to_string(x);  // Fixed typo
5
6        int left = 0;
7        int right = s.length() - 1;
8
9        while (left < right) {
10            if (s[left] != s[right]) {
11                return false;
12            }
13            left++;
14            right--;
15        }
16
17        return true;
18    }
19};
20