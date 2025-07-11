class Solution {
public:
    int binary_search(int l, int r, int target, vector<int>& nums)  {
        if (l > r) return -1;
        int m = (l-r)/2 + r;
        if (target == nums[m]) {
            return m;
        } else {
            if (target < nums[m]) {
                return binary_search(l, m-1, target, nums);
            } else {
                return binary_search(m+1, r, target, nums);
            }
        }
    }
    int search(vector<int>& nums, int target) {
        return binary_search(0, nums.size()-1, target, nums);
    }
};