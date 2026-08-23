class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int low = 0, high = rows - 1;

        while(low <= high){

            int mid = low + (high - low)/2;

            if(target < matrix[mid][0]){
                high = mid - 1;
            }
            else if(target > matrix[mid][cols - 1]){
                low = mid + 1;
            }
            else{

                int l = 0, h = cols - 1;

                while(l <= h){

                    int m = l + (h - l)/2;

                    if(matrix[mid][m] == target)
                        return true;

                    if(matrix[mid][m] < target)
                        l = m + 1;
                    else
                        h = m - 1;
                }

                return false;
            }
        }

        return false;
    }
};