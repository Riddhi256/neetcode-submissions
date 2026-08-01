class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (auto &ch : tokens) {
            int a,b;
            if (ch == "+" || ch == "-" || ch == "*" || ch == "/") {
                if (!st.empty()) {
                    a = st.top();
                    st.pop();
                    if (!st.empty()) {
                        b = st.top();
                        st.pop();
                    }
                }
                if (ch == "+") {
                    int c = a + b;
                    st.push(c);
                }
                if (ch == "-") {
                    int c = b - a;
                    st.push(c);
                }
                if (ch == "*") {
                    int c = a * b;
                    st.push(c);
                }
                if (ch == "/") {
                    int c = b / a;
                    st.push(c);
                }
            }
            else
            {
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};
