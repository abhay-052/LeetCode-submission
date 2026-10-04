class MinStack {
public:
    stack<long long int> s;
    long long int m=INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        if(s.size()==0){
            s.push(value);
            m=value;
        }else{
        if(value<m){
            s.push((long long)2*value-m);
            m=value;
        }
        else s.push(value);
        }
    }
    
    void pop() {
        if(s.top()<m){
            m=2*m-s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.top()<m) return m;
        else return s.top();
    }
    
    int getMin() {
        return m;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */