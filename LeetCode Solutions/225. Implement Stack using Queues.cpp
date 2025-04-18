class MyStack {
private:
    queue<int> q1, q2;

public:
    MyStack() {}

    void push(int x) {
        q2.push(x);

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
    }

    int pop() {
        int top_element = q1.front();
        q1.pop();
        return top_element;
    }

    int top() { return q1.front(); }

    bool empty() { return q1.empty(); }
};
