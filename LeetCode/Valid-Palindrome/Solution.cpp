1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int left = 0, right = s.length() - 1;
5
6        while (left < right) {
7            // Skip non-alphanumeric characters
8            while (left < right && !isalnum(s[left])) left++;
9            while (left < right && !isalnum(s[right])) right--;
10
11            // Compare characters (case-insensitive)
12            if (tolower(s[left]) != tolower(s[right])) {
13                return false;
14            }
15
16            left++;
17            right--;
18        }
19        return true;
20    }
21};
22