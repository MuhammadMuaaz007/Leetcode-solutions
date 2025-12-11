1class StockSpanner {
2private:
3    stack<pair<int,int>> st;  // (price, span)
4
5public:
6    StockSpanner() {
7        // constructor: stack is initially empty
8    }
9
10    int next(int price) {
11        int span = 1;  // today counts as 1
12
13        // accumulate spans of consecutive smaller/equal prices
14        while (!st.empty() && st.top().first <= price) {
15            span += st.top().second;  // add the span of top element
16            st.pop();                 // remove it
17        }
18
19        st.push({price, span});  // push current price and its span
20        return span;             // return the span for today
21    }
22};
23
24/**
25 * Your StockSpanner object will be instantiated and called as such:
26 * StockSpanner* obj = new StockSpanner();
27 * int param_1 = obj->next(price);
28 */