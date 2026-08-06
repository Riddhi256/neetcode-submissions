class Solution {
   public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        int n = intervals.size();
        for (int i = 1; i < n; i++) {
            int last = ans.back()[1];
            int first = ans.back()[0];
            if (last >= intervals[i][0]) {
                last = max(last, intervals[i][1]);
                ans.back()[1] = last;
            } else {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
