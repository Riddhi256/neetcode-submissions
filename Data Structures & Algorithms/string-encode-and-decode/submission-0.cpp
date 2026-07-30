class Solution {
   public:
    string encode(vector<string>& strs) {
        string ans;
        for (string s : strs) {
            ans += to_string(s.length()) + "#";
            ans += s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> str;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            j++;
            str.push_back(s.substr(j, len));
            i = j + len;
        }
        return str;
    }
};
