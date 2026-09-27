class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string word = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(word);
        }
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
