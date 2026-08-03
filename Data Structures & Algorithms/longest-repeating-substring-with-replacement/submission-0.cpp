class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0 ;
        int r = 0;
        int maxF = 0;
        int len = 0;
        vector<int> count(26,0);
        int n = s.size();
        while(r<n)
        {
            count[s[r] - 'A']++;
            maxF = max(maxF,count[s[r]-'A']);
            while((r-l+1)-maxF > k)
            {
                count[s[l] - 'A']--;
                maxF = 0;
                for(int i = 0;i<26;i++)
                {
                    maxF = max(maxF,count[i]);
                }
                l++;
            }
            if((r-l+1) - maxF <= k)
            {
                len = max(len,r-l+1);
            }
            r++;
        }
        return len;
    }
};
