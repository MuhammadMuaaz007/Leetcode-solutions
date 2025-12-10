1class MinStack {
2    stack<pair<int,int>> st;
3
4public:
5    void push(int n) {
6        int minVal = st.empty() ? n : min(n, st.top().second);
7        st.push({n, minVal});
8    }
9
10    void pop() {
11        st.pop();
12    }
13
14    int top() {
15        return st.top().first;
16    }
17
18    int getMin() {
19        return st.top().second;
20    }
21};
22
23/**
24 * Your MinStack object will be instantiated and called as such:
25 * MinStack* obj = new MinStack();
26 * obj->push(val);
27 * obj->pop();
28 * int param_3 = obj->top();
29 * int param_4 = obj->getMin();
30 */