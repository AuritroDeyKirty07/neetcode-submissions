class Solution {
public:
    int maxArea(vector<int>& heights) {
       int low=0,high=heights.size()-1;
       int ans=INT_MIN;
       while(low<high){
        int contains=(min(heights[low],heights[high]))*(high-low);
        ans=max(ans, contains);
        if(heights[low]<heights[high]){
            low++;
        }
        else{
            high--;
        }
       } 
       return ans;
    }
};
