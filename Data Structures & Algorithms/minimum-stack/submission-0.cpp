class MinStack {
public:
    stack<int> s;
    stack<int> smin;
    MinStack() {
    }
    
    void push(int val) {
        this -> s.push(val);
        if(this -> smin.empty()) this -> smin.push(val);
        else this -> smin.push((val< this -> smin.top())? val : this -> smin.top());
    }
    
    void pop() {
        this -> s.pop();
        this -> smin.pop();
    }
    
    int top() {
        return this -> s.top();
    }
    
    int getMin() {
        return this -> smin.top();
    }
};
