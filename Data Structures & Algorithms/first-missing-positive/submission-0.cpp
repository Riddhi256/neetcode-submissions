class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> mp;
        for(int x : nums)
        {
            if(x>0)
            {
                if(mp.count(x))
                {
                    continue;
                }
                else{
                    mp.insert(x);
                }
            }
        }
        int num = 1;
        for(auto &it: mp)
        {
            if(it!=num)
            {
                break;
            }
            num++;
        }
        return num;
    }
};