class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int mini=1;
        vector<int> ans;
        vector<int> preff(n,1);
        vector<int> suff(n,1);
        for(int i=0;i<n;i++){
            preff[i]=mini;
            mini*=nums[i];
        }
        mini = 1;
        for(int i=n-1;i>=0;i--){
            suff[i]=mini;
            mini*=nums[i];
        }
        for(int i=0;i<n;i++){
        ans.push_back(preff[i]*suff[i]);
        }
        return ans;
    }
};
