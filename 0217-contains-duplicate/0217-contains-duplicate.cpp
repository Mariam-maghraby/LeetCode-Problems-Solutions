class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        map<int, bool> map;
        for (int i=0; i<nums.size(); i++){
            if (map[nums[i]]){
                flag = true;
                break;
            }
            else{
                map[nums[i]] = true;
            }
        }
        return flag; 
    }
};