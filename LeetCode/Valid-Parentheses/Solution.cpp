1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for (char ch : s) {
7
8            if (ch == '(' || ch == '{' || ch == '[') {
9                st.push(ch);
10            } else {
11          if (st.empty()) return false;
12                char top = st.top();
13                if ((ch == ')' && top == '(') ||
14                    (ch == '}' && top == '{') ||
15                    (ch == ']' && top == '[')) {
16                    st.pop(); // matched
17                } else {
18                    return false; // mismatch
19                }
20            }
21        }
22
23        return st.empty();
24    }
25};