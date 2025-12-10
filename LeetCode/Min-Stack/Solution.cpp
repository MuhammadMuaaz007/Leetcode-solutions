1class MinStack {
2    stack<pair<int,int>> st;
3
4public:
5    void push(int val) {
6       if(st.empty()){
7        st.push({val,val});
8       }else{
9        int minVal=min(val,st.top().second);
10        st.push({val,minVal});
11       }
12    }
13
14    void pop() {
15        st.pop();
16    }
17
18    int top() {
19        return st.top().first;
20    }
21
22    int getMin() {
23        return st.top().second;
24    }
25};
26
27/**
28 * Your MinStack object will be instantiated and called as such:
29 * MinStack* obj = new MinStack();
30 * obj->push(val);
31 * obj->pop();
32 * int param_3 = obj->top();
33 * int param_4 = obj->getMin();
34 */