class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        // Count frequencies
        for (int num : nums) {
            freq[num]++;
        }
        // {frequency, number}
        auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
            if (a.first == b.first) {
                return a.second < b.second;  // larger number first
            }
            return a.first > b.first;        // smaller frequency first
        };
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            decltype(cmp)
        > pq(cmp);
        // Put {frequency, number} into heap
        for (auto& [num, count] : freq) {
            pq.push({count, num});
        }
        vector<int> ans;
        while (!pq.empty()) {
            auto [count, num] = pq.top();
            pq.pop();
            while (count--) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};