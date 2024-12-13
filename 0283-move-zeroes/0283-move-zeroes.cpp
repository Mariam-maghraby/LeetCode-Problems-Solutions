class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int s=0;
        vector<int> nums2(nums.size());
        if(nums.size() != 1){
            for(int i=0; i<nums.size(); i++){
                if(nums[i]!=0){
                    nums[l] = nums[i];
                    l++;
                    
                }else{
                    s++;
                }
            }
           while(s){
                nums[nums.size()-s] = 0;
                s--;
            }
        }
    }
};