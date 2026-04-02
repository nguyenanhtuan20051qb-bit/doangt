class MinStack {
private:
    stack<int> stackData;
    stack<int> stackMin;
    
public:
    MinStack() {
    }
    
    void push(int val) {
        stackData.push(val);
        if (stackMin.empty() || val <= stackMin.top()) {
            stackMin.push(val);
        }
    }
    
    void pop() {
        if (stackData.top() == stackMin.top()) {
            stackMin.pop();
        }
        stackData.pop();
    }
    
    int top() {
        return stackData.top();
    }
    
    int getMin() {
        return stackMin.top();
    }
};
