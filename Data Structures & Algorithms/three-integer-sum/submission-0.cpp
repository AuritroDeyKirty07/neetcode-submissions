class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        for(int i=0;i<nums.size();i++){
        unordered_map<int, int> mpp;
            for(int j=i+1;j<nums.size();j++){
                int more=-(nums[i]+nums[j]);
                if(mpp.find(more)!=mpp.end()){
                    vector<int> temp={nums[i], nums[j], more};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            mpp[nums[j]]++;
            }
        }

        return vector<vector<int>>(st.begin(), st.end());
    }
};
