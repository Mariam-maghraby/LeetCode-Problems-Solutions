class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int mx = 0;
        unordered_set<int> st(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
           if(!st.count(nums[i]-1)){
               int inc = 1;
               while(st.count(nums[i]+inc)){
                   inc++;
               }
               mx = max(inc, mx);
           }

        }
        return mx;
    }
};