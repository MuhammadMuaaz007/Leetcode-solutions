  class MyQueue {
    stack<int> input;
    stack<int> output;

   public:
    MyQueue() {}

    void push(int x) {
        input.push(x);
    }

    int pop() {
        // Transfer elements only if output is empty
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        // Return -1 if queue is still empty
        if (output.empty()) return -1;

        int n = output.top();
        output.pop();
        return n;
    }

    int peek() {
        // Transfer elements only if output is empty
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        // Return -1 if queue is still empty
        if (output.empty()) return -1;

        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};
