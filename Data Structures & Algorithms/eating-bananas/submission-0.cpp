class Solution {
public:

    long long  totalHr(vector<int>& a, int b){
        long long hrs=0;
        for(int i=0;i<a.size();i++){
            hrs+=ceil((double)a[i]/b);
        }
        return hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi, piles[i]);
        }
        int low=1, high=maxi, ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long total= totalHr(piles, mid);
            if (total<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
