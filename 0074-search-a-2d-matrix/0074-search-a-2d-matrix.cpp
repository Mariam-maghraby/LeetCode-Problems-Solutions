class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix[0].size() -1;
        int cols =matrix.size(); //m
        int i=0;
        int  mid;
        while(i < cols - 1 && target> matrix[i][r]){
            i++;
        }
        while(l<=r && i<cols && target<= matrix[cols-1][r]){
           
            mid = (l+r)/2;

            if(matrix[i][mid] == target){
                return true;
            }else{
                if(matrix[i][mid] > target){
                    r = mid-1;
                }else{
                    l = mid+1;
                }
            }

        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna