class Solution {
public:
    
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int i = 0;int j = k;
        while(j<=nums.size())
        { int maxN = INT_MIN;
            for(int a = i;a<j;a++)
            {
                maxN = max(maxN, nums[a]);
            }
            ans.push_back(maxN);
            i++;j++;
        }
       return ans;
    }
};
