class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int longest = 1;
        unordered_set<int> st;
       
        for(int x: nums)
        {
            st.insert(x);
        }

        for(auto &it : st)
        {
            if(!st.count(it-1))
            {
                int cnt = 1;
                int x = it;
                while(st.count(x+1))
                {
                    x = x+1;
                    cnt = cnt + 1;
                }
                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};
