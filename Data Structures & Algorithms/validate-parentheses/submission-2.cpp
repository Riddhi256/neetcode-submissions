class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else if (c == ')' || c == ']' || c == '}') {
                if (!st.empty()) {
                    char check = st.top();
                    st.pop();
                    if (c == ')' && check != '(') {
                        return false;
                    } else if (c == ']' && check != '[') {
                        return false;
                    } else if (c == '}' && check != '{') {
                        return false;
                    }
                } else {
                    return false;
                }

            } 
        }
        return st.empty();
    }
};
