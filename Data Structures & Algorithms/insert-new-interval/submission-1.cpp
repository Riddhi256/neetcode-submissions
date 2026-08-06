class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        
        // for(int i = 0;i<n;i++)
        // {
        //     index++;
        //     if(inter[i][0] < newInterval[0])
        //     {
        //         ans.push_back(inter);
        //     }
        //     if(inter[i][0] > newInterval[0])
        //     {
        //         ans.push_back(newInterval);
        //         break;
        //     }
        // }
        // for(int i = index+1;i<=n;i++)
        // {
        //     ans.push_back(inter[i]);
        // }
        
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            int last = ans.back()[1];
            if(last >= intervals[i][0])
            {
                ans.back()[1] = max(last,intervals[i][1]);
            }
            else
            {
                ans.push_back(intervals[i]);
            }
        }
    return ans;
    }
};
