class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int actual=n*(n+1)/2;
        int diff=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        diff=actual-sum;
        return diff;
    }
};