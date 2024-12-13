class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=i+1;
        if(nums.size() != 1){
            while(j<nums.size() && i<nums.size()-1){
                if(nums[i] != 0){
                    ++i;
                    ++j;
                }
                else{
                    if(nums[j] == 0){
                        ++j;
                    }
                    else{
                        nums[i] = nums[j];
                        nums[j] = 0;
                        ++i;
                        ++j;
                    }
                }
            }
        }
    }
};