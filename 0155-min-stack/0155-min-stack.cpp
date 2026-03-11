class MinStack {
public:
    MinStack() {
    }

    stack<int> stk;
    stack<int> minStk;

    void push(int val) {
        if(stk.empty()){
            minStk.push(val);
        }else{
            if(minStk.top()<val){
                minStk.push(minStk.top());
            }else{
               minStk.push(val); //if minStk.top()>val 
            }
        }
        stk.push(val);
        
    }
    
    void pop() {
        stk.pop();
        minStk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStk.top();   
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */