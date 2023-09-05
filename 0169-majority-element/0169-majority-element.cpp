class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>numsMap;

        for(int i=0; i<nums.size(); i++){
            numsMap[nums[i]]++;
        }
        auto pr = std::max_element(numsMap.begin(), numsMap.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second;
                });
        return pr->first;

    }
};