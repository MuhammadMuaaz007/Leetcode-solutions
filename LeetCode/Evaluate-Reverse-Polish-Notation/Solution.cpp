1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int>st;
5        for(int i=0;i<tokens.size();i++){
6            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/"){
7                  st.push(stoi(tokens[i]));
8            }else if(tokens[i]=="+"){
9
10                int a=st.top();st.pop();
11                int b=st.top();st.pop();
12                st.push(b+a);
13
14            }else if(tokens[i]=="-"){
15
16                int a=st.top();st.pop();
17                int b=st.top();st.pop();
18                st.push(b-a);
19
20            }else if(tokens[i]=="*"){
21
22                int a=st.top();st.pop();
23                int b=st.top();st.pop();
24                st.push(b*a);
25
26            }else if(tokens[i]=="/"){
27
28                int a=st.top();st.pop();
29                int b=st.top();st.pop();
30                st.push(b/a);
31            }
32        }
33        return st.top();
34    }
35};