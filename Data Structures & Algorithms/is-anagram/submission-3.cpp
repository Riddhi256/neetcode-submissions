#include <cctype>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        
        vector<int> freq(26,0);
        for(char &c: s)
        {
            c=tolower(c);
        }
        
        for(char &c: t)
        {
            c=tolower(c);
        }
        for(int i=0;i<s.length();i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z') 
            {
                freq[s[i] - 'a']++;
            }

            if(t[i] >= 'a' && t[i] <= 'z')
            {
                freq[t[i] - 'a']--;
            }
            
            else
            {
                continue;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            {
                return false;
            }
        }
        return true;

    }
};
