class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it;


        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return (nums.size());

        
    }
};