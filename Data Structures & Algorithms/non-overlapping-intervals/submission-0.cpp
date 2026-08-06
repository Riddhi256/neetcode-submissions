class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int over = 0;
        sort(intervals.begin(),intervals.end());
        int prevEnd = intervals[0][1];
        int n = intervals.size();
        for(int i = 1;i<n;i++)
        {
            if(prevEnd > intervals[i][0])
            {
                over++;
                prevEnd = min(prevEnd,intervals[i][1]);
            }
            else{
                prevEnd = intervals[i][1];
            }
        }
        return over;
    }
};
