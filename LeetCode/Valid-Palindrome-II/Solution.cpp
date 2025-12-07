1    class Solution {  
2   public:
3    bool isPalindrome(string &s, int l, int r) {
4        while (l < r) {
5            if (s[l] != s[r]) return false;
6            l++;
7            r--;
8        }
9        return true;
10    }
11
12    bool validPalindrome(string s) {
13        int left = 0, right = s.size() - 1;
14
15        while (left < right) {
16            if (s[left] == s[right]) {
17                left++;
18                right--;
19            } else {
20                return isPalindrome(s, left + 1, right) ||
21                       isPalindrome(s, left, right - 1);
22            }
23        }
24        return true;
25    }
26};
27