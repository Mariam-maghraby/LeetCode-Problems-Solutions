class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>solution;
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        while(k--){
            auto pr = std::max_element(mp.begin(), mp.end(), [](const auto &x, const auto &y) {
                return x.second < y.second;
            });
            solution.push_back(pr->first);
            pr->second = 0;
        }
        return solution;
    }
};