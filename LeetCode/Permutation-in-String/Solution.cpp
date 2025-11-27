1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        int n1 = s1.size(), n2 = s2.size();
5        if (n1 > n2)
6            return false;
7
8        vector<int> count1(26, 0), count2(26, 0);
9
10        for (int i = 0; i < n1; i++) {
11            count1[s1[i] - 'a']++;
12            count2[s2[i] - 'a']++;
13        }
14 
15
16        for (int i = 0; i <= n2 - n1; i++) {
17            if (count1 == count2)
18                return true;
19            if (i + n1 < n2) {
20                count2[s2[i + n1] - 'a']++; // add new char to window
21                count2[s2[i] - 'a']--;      // remove old char from window
22            }
23        }
24        return false;
25    }
26};