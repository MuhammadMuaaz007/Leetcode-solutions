1class Solution {
2public:
3    string decodeString(string s) {
4        stack<int> numberStack;
5        stack<string> stringStack;
6        string current = "";
7        int k = 0;
8
9        for (char c : s) {
10            if (isdigit(c)) {
11                // Build the number
12                k = k * 10 + (c - '0');
13            } 
14            else if (c == '[') {
15                // Push the number and current string onto stacks
16                numberStack.push(k);
17                stringStack.push(current);
18                current = "";
19                k = 0;
20            } 
21            else if (c == ']') {
22                // Pop the number and previous string
23                int repeat = numberStack.top(); numberStack.pop();
24                string prev = stringStack.top(); stringStack.pop();
25                string temp = prev;
26                while (repeat--) {
27                    temp += current;
28                }
29                current = temp;
30            } 
31            else {
32                // Normal character → add to current
33                current += c;
34            }
35        }
36
37        return current;
38    }
39};  