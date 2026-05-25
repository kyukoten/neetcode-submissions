class MinStack {
public:
    stack<int>mn,st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(mn.empty())
            mn.push(val);
        else
            mn.push(min(val,mn.top()));
    }
    
    void pop() {
        mn.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
    }
};
