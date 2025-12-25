1class Solution {
2public:
3    string process(string s) {
4        stack<char> st;
5        for (char c : s) {
6            if (c == '#') {
7                if (!st.empty()) st.pop();
8            } else {
9                st.push(c);
10            }
11        }
12        string res = "";
13        while (!st.empty()) {
14            res += st.top();
15            st.pop();
16        }
17        return res;
18    }
19    bool backspaceCompare(string s, string t) {
20        return process(s) == process(t);
21    }
22};
23