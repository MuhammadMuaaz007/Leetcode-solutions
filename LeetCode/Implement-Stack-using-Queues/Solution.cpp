1#include <queue>
2using namespace std;
3
4class MyStack {
5private:
6    queue<int> q;
7
8public:
9    MyStack() {
10    }
11    
12    void push(int x) {
13        q.push(x);
14        int n = q.size();
15        // Rotate the queue to bring the new element to the front
16        for (int i = 0; i < n - 1; i++) {
17            q.push(q.front());
18            q.pop();
19        }
20    }
21    
22    int pop() {
23        if (q.empty()) return -1; 
24        int topElement = q.front();
25        q.pop();
26        return topElement;
27    }
28    
29    int top() {
30        if (q.empty()) return -1;
31        return q.front();
32    }
33    
34    bool empty() {
35        return q.empty();
36    }
37};
38