class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char c : s) {
            // 1. If it's an opening bracket, push it onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // 2. If it's a closing bracket...
            else {
                // If the stack is empty, there is no matching opening bracket
                if (st.empty()) return false;
                
                // If the closing bracket doesn't match the top of the stack, it's invalid
                if (c == ')' && st.top() != '(') return false;
                if (c == '}' && st.top() != '{') return false;
                if (c == ']' && st.top() != '[') return false;
                
                // If it matches, pop the opening bracket from the stack
                st.pop();
            }
        }
        
        // 3. If the stack is empty at the end, all brackets were matched!
        return st.empty();
    }
};