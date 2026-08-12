class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int area = 0;
        for (int i = 0; i <= heights.size(); i++) {
            int currHeight = (i == heights.size()) ? 0 : heights[i];
            while (!st.empty() && heights[st.top()] > currHeight) {
                int h = heights[st.top()];
                st.pop();
                int left = st.empty() ? -1 : st.top();
                int width = i - left - 1;
                area = max(area, h * width);
            }
            st.push(i);
        }
        return area;
    }
};