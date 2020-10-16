class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        min.push(INT_MAX);
    }
    
    void push(int x) {
        if(x<min.top()) min.push(x);
        else min.push(min.top());
        stack.push(x);
    }
    
    void pop() {
        min.pop();
        stack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return min.top();
    }
private:
    stack<int> min;
    stack<int> stack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */