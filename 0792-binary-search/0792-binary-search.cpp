class Solution {
public:
    int binary_search(int l, int r, int target, vector<int>& nums) {
        long long m = (l + r) / 2; // long long or (l-r)/2 + r
        if (target == nums[m]) {
            return m;
        } else {
            if (target < nums[m]) {
                return binary_search(l, m, target, nums);
            } else {
                return binary_search(m, r, target, nums);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int res = -1;
        while (l <= r) {
            int m = (l + r) / 2; // long long or (l-r)/2 + r
            if (target == nums[m]) {
                res = m;
                break;
            } else {
                if (target < nums[m]) {
                    r = m-1;
                } else {
                    l = m+1;
                }
            }
        }
        return res;
    }
};