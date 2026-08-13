class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> freq(n+1,0);
        for(int i = 0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        vector<int> ans;
        for(int i = 1;i<=n;i++)
        {
            if(freq[i]==2)
            {
                ans.push_back(i);
            }
        }
        for(int i = 1;i<=n;i++)
        {
            if(freq[i]==0)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};