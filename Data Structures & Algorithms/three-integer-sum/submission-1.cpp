class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> check;
        for (int i = 0; i < n; i++) {
            unordered_set<int> st;
            for (int j = i + 1; j < n; j++) {
                int a = nums[i];
                int b = nums[j];
                int target = -(a + b);
                if (st.count(target)) {
                    vector<int> triplet = {a, b, target};
                    sort(triplet.begin(), triplet.end());
                    if (!check.count(triplet)) {
                        ans.push_back(triplet);
                        check.insert(triplet);
                    }
                }
                st.insert(b);
            }
        }
        return ans;
    }
};
