class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target > nums[nums.size()-1]){
            return nums.size();
        }
        int h = nums.size()-1;
        int l = 0;
        int m;
        while(h>=l){
            m=(l+h)/2;
            if(target == nums[m]){
                return m;
            }    
            else{
                if(target > nums[m]){
                        l= m+1;
                }else{
                    h= m-1;
                }
            }
        }
        return l;        
    }
};