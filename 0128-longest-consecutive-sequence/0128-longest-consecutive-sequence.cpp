class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size() == 1){
            return 1;
        }
        sort(nums.begin(), nums.end());
        unique(nums.begin(), nums.end());
        int max = 0;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if((i+1) < nums.size() && nums[i]+1 == nums[i+1]){
                count++;
            }
            else{
                count++;
                if(max < count){
                    max = count;
                }
                count = 0;
            }
        }

        return max;
    }
};