class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sumLeft = 0;
        int sumRight = 0;

        for(int i=0; i<nums.size(); i++){
            sumLeft = accumulate(nums.begin(), nums.begin()+i, 0);
            sumRight = accumulate(nums.begin()+i+1, nums.end(), 0);
            if(sumLeft == sumRight){
                return i;
            }
        }
    return -1;
        
    }
};