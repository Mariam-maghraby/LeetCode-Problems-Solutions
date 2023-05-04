class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        map<int, int> map;
        for (int i=0; i<nums.size(); i++){
            if (map.count(nums[i]) > 0){
                flag = true;
                break;
            }
            else{
                map.insert({nums[i], i});
            }
        }
        return flag; 
    }
};