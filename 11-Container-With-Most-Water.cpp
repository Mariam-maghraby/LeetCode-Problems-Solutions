class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int l =0;
        int r = height.size()-1;
        while(l < r){
            int minHeight = min(height[l], height[r]);
            int currArea = minHeight * (r-l);
            if(currArea > maxArea){
                maxArea = currArea;
            }
            if(height[l] <= height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxArea;
    }
};