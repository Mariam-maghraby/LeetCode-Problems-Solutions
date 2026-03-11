class MinStack {
public:
    MinStack() {
    }

    stack<int> stk;
    vector<int> vec;

    void push(int val) {
        stk.push(val);
        vec.push_back(val);
        sort(vec.begin(), vec.end());
    }
    
    void pop() {
        if(vec[0] == stk.top()){
            stk.pop();
            vec.erase(vec.begin());
        }  
        else{
            // 1. Find the first occurrence
            auto it = std::find(vec.begin(), vec.end(), stk.top());
            // 2. Erase it if it was found
            if (it != vec.end()) {
                vec.erase(it);
            }
            stk.pop();

        }
        
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return *vec.begin();   
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