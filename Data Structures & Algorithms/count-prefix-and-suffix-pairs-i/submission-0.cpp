class Solution {
public:
    bool isPrefixSuffix(string s1, string s2)
    {
        int n = s2.length();
        int m = s1.length();
        for(int i = 0;i<m;i++)
        {
            if(s2[i]!=s1[i] || s2[n-i-1]!=s1[m-i-1])
            {
                return false;
            }
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for(int i = 0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                bool check = isPrefixSuffix(words[i],words[j]);
                if(check){
                    count++;
                }
            }
        }
        return count;
    }
};