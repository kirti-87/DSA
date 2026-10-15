class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;

    MyQueue() {
        // Constructor
    }

    // Push element into the queue
    void push(int x) {

        // Step 1: Move all elements from s1 to s2
        // This temporarily reverses their order
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Step 2: Push the new element into s1
        // Since s1 is empty, x becomes the top
        s1.push(x);

        // Step 3: Move all elements back from s2 to s1
        // This puts the oldest element back on top
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    // Remove and return the front element
    int pop() {
        int ans = s1.top();
        s1.pop();

        return ans;
    }

    // Return the front element
    int peek() {
        return s1.top();
    }

    // Check whether the queue is empty
    bool empty() {
        return s1.empty();
    }
};