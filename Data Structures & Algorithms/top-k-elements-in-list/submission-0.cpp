class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for (auto it : mpp) {
            v.push_back({it.second, it.first});
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};