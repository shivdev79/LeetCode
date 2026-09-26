class MinStack {
public:
stack <pair<int, int>> st;
    void push(int x) {
       if(st.empty()) {
            st.push({x, x});
        } else {
            st.push({x, min(x, st.top().second)});
        }
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
        }
    }
    
    int top() {
        if(!st.empty()){
            return st.top().first;
        }
        else{
            return -1;
        }
    }
    
    int getMin() {
        if(!st.empty()){
            return st.top().second;
        }
        else{
            return -1;
        }
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