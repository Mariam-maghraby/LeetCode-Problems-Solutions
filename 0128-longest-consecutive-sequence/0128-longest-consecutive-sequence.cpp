class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size() == 1){
            return 1;
        }
        sort(nums.begin(), nums.end());
        if(nums.size() == 2){
            if(nums[1] == nums[0]+1){
                return 2;
            }
            return 1;
        }
        unique(nums.begin(), nums.end());
        vector<vector<int>>possibleSolutions;
        vector<int> subSolution;

        for(int i=0; i<nums.size(); i++){
            if((i+1) < nums.size() && nums[i]+1 == nums[i+1]){
                subSolution.push_back(nums[i]);
            }
            else{
                subSolution.push_back(nums[i]);
                possibleSolutions.push_back(subSolution);
                subSolution.clear();
            }
        }
        int max = 0;
        for(int i=0; i<possibleSolutions.size(); i++){
            if(max<possibleSolutions[i].size()){
                max = possibleSolutions[i].size();
            }
        }
        return max;
    }
};