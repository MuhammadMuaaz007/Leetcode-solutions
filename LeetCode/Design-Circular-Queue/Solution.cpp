class MyCircularQueue {
private:
    vector<int> q;
    int front, rear, count, size;

public:
    MyCircularQueue(int k) {
        q.resize(k);
        size = k;
        front = 0;
        rear = 0;
        count = 0;
    }

    bool enQueue(int value) {
        if (isFull()) return false;

        q[rear] = value;
        rear = (rear + 1) % size;
        count++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;

        front = (front + 1) % size;
        count--;
        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return q[front];
    }

    int Rear() {
        if (isEmpty()) return -1;
        int lastIndex = (rear - 1 + size) % size;
        return q[lastIndex];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }
};
