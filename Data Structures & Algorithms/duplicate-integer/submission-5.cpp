#include<algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0)
        {
            return false;
        }
        vector<int> found=nums;
        sort(found.begin(),found.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(found[i]==found[i+1])
            {
                return true;
            }
        }
        return false;
    }
};