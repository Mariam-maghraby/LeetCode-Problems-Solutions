class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> solution;
        vector<int> numsSet(nums.size()+1);
        for(int i=0; i<nums.size(); i++){
            numsSet[nums[i]]++;
        }
        for(int i=1; i<numsSet.size(); i++){
            if(numsSet[i] == 0){
                solution.push_back(i);
            }
        }

       return solution; 
    }
};