class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low= 0;
        int high = nums.size()-1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            int check = nums[mid];
            if(check==target)
            {
                return mid;
            }
            else if(check>target)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }

        return -1;
    }
};
