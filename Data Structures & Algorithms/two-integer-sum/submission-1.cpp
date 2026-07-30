class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        int i = 0;
        int j = temp.size()-1;
        int a,b;
        while(i<j)
        {
            if(temp[i]+temp[j] == target)
            {
                a = temp[i];
                b = temp[j];
                break;
            }
            else if(temp[i]+temp[j] < target)
            {
                i++;
            }
            else if(temp[i]+temp[j] > target)
            {
                j--;
            }
        }
        vector<int> ans;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]==a || nums[i]==b)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
