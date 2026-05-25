class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto i:s)
        {
            if(st.empty())
            {
                if (i=='[' || i=='(' || i=='{')
                    st.push(i);
                else
                    return false;    
            }
            else
            {
                if(st.top()=='[')
                {
                    if(i==']')
                        st.pop();
                    else if(i=='}' || i==')')
                        return false;
                    else
                        st.push(i);
                }
                else if(st.top()=='{')
                {
                    if(i=='}')
                        st.pop();
                    else if(i==']' || i==')')
                        return false;
                    else
                        st.push(i);
                }
                else
                {
                    if(i==')')
                        st.pop();
                    else if(i==']' || i=='}')
                        return false;
                    else
                        st.push(i);
                }
            }    
        }
        return st.empty();
    }
};