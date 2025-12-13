1
2
3class MyStack {
4private:
5    queue<int> q;
6
7public:
8    MyStack() {
9    }
10    
11    void push(int x) {
12        q.push(x);
13        int n = q.size();
14        // Rotate the queue to bring the new element to the front
15        for (int i = 0; i < n - 1; i++) {
16            q.push(q.front());
17            q.pop();
18        }
19    }
20    
21    int pop() {
22        if (q.empty()) return -1; 
23        int topElement = q.front();
24        q.pop();
25        return topElement;
26    }
27    
28    int top() {
29        if (q.empty()) return -1;
30        return q.front();
31    }
32    
33    bool empty() {
34        return q.empty();
35    }
36};
37