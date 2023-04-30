class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        map<int, int> map;
        int value;
        for(int i=0; i<nums.size(); i++){
            value = target - nums[i];
            if (map.find(value) != map.end()){
                sol.push_back(i);
                sol.push_back(map[value]);
            }
            else{
                map.insert({nums[i], i});
            }
        }
        return sol;
        
    }
};